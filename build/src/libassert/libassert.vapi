/* libassert.vapi generated by valac 0.50.2, do not modify. */

namespace Assert {
	[CCode (cheader_filename = "libassert.h")]
	public class AssertionResult {
		public bool is_error;
		public string message;
		public AssertionResult ();
		public AssertionResult.error (string message);
		public AssertionResult.success ();
	}
	[CCode (cheader_filename = "libassert.h")]
	public class TestSuiteInstance : GLib.Object {
		public TestSuiteInstance ();
		public void assert (bool condition, string message) throws GLib.Error;
		public void it (string name, Assert.TestCase tcase);
		public void run ();
	}
	[CCode (cheader_filename = "libassert.h")]
	public struct NamedTestCase {
		public string name;
		public Assert.TestCase tcase;
	}
	[CCode (cheader_filename = "libassert.h")]
	public delegate void TestCase () throws GLib.Error;
	[CCode (cheader_filename = "libassert.h")]
	public delegate void TestSuite (Assert.TestSuiteInstance instance);
	[CCode (cheader_filename = "libassert.h")]
	public static Assert.TestSuiteInstance suite (string name, Assert.TestSuite tsuite);
}
