/* tododisplay.c generated by valac 0.50.2, the Vala compiler
 * generated from tododisplay.vala, do not modify */

#include <gtk/gtk.h>
#include <glib-object.h>
#include <glib.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>
#include <json-glib/json-glib.h>

#define DOIT2_TYPE_TO_DO_DISPLAY (doit2_to_do_display_get_type ())
#define DOIT2_TO_DO_DISPLAY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DOIT2_TYPE_TO_DO_DISPLAY, Doit2ToDoDisplay))
#define DOIT2_TO_DO_DISPLAY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DOIT2_TYPE_TO_DO_DISPLAY, Doit2ToDoDisplayClass))
#define DOIT2_IS_TO_DO_DISPLAY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DOIT2_TYPE_TO_DO_DISPLAY))
#define DOIT2_IS_TO_DO_DISPLAY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DOIT2_TYPE_TO_DO_DISPLAY))
#define DOIT2_TO_DO_DISPLAY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DOIT2_TYPE_TO_DO_DISPLAY, Doit2ToDoDisplayClass))

typedef struct _Doit2ToDoDisplay Doit2ToDoDisplay;
typedef struct _Doit2ToDoDisplayClass Doit2ToDoDisplayClass;
typedef struct _Doit2ToDoDisplayPrivate Doit2ToDoDisplayPrivate;
enum  {
	DOIT2_TO_DO_DISPLAY_0_PROPERTY,
	DOIT2_TO_DO_DISPLAY_NUM_PROPERTIES
};
static GParamSpec* doit2_to_do_display_properties[DOIT2_TO_DO_DISPLAY_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define DOIT2_TYPE_TO_DO (doit2_to_do_get_type ())
#define DOIT2_TO_DO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DOIT2_TYPE_TO_DO, Doit2ToDo))
#define DOIT2_TO_DO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DOIT2_TYPE_TO_DO, Doit2ToDoClass))
#define DOIT2_IS_TO_DO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DOIT2_TYPE_TO_DO))
#define DOIT2_IS_TO_DO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DOIT2_TYPE_TO_DO))
#define DOIT2_TO_DO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DOIT2_TYPE_TO_DO, Doit2ToDoClass))

typedef struct _Doit2ToDo Doit2ToDo;
typedef struct _Doit2ToDoClass Doit2ToDoClass;

#define DOIT2_TYPE_DAY (doit2_day_get_type ())
#define DOIT2_DAY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DOIT2_TYPE_DAY, Doit2Day))
#define DOIT2_DAY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DOIT2_TYPE_DAY, Doit2DayClass))
#define DOIT2_IS_DAY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DOIT2_TYPE_DAY))
#define DOIT2_IS_DAY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DOIT2_TYPE_DAY))
#define DOIT2_DAY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DOIT2_TYPE_DAY, Doit2DayClass))

typedef struct _Doit2Day Doit2Day;
typedef struct _Doit2DayClass Doit2DayClass;
typedef struct _Doit2ToDoPrivate Doit2ToDoPrivate;

#define DOIT2_TYPE_DAY_LABEL (doit2_day_label_get_type ())
#define DOIT2_DAY_LABEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DOIT2_TYPE_DAY_LABEL, Doit2DayLabel))
#define DOIT2_DAY_LABEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DOIT2_TYPE_DAY_LABEL, Doit2DayLabelClass))
#define DOIT2_IS_DAY_LABEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DOIT2_TYPE_DAY_LABEL))
#define DOIT2_IS_DAY_LABEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DOIT2_TYPE_DAY_LABEL))
#define DOIT2_DAY_LABEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DOIT2_TYPE_DAY_LABEL, Doit2DayLabelClass))

typedef struct _Doit2DayLabel Doit2DayLabel;
typedef struct _Doit2DayLabelClass Doit2DayLabelClass;

struct _Doit2ToDoDisplay {
	GtkBox parent_instance;
	Doit2ToDoDisplayPrivate * priv;
};

struct _Doit2ToDoDisplayClass {
	GtkBoxClass parent_class;
};

struct _Doit2ToDoDisplayPrivate {
	GtkLabel* description;
	GtkBox* days_box;
};

struct _Doit2ToDo {
	GObject parent_instance;
	Doit2ToDoPrivate * priv;
	gchar* name;
	gchar* description;
	gboolean done;
	GeeArrayList* days;
	GDateTime* done_on;
	JsonArray* days_json;
};

struct _Doit2ToDoClass {
	GObjectClass parent_class;
};

static gint Doit2ToDoDisplay_private_offset;
static gpointer doit2_to_do_display_parent_class = NULL;

GType doit2_to_do_display_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (Doit2ToDoDisplay, g_object_unref)
GType doit2_to_do_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (Doit2ToDo, g_object_unref)
Doit2ToDoDisplay* doit2_to_do_display_new (Doit2ToDo* item);
Doit2ToDoDisplay* doit2_to_do_display_construct (GType object_type,
                                                 Doit2ToDo* item);
GType doit2_day_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (Doit2Day, g_object_unref)
Doit2DayLabel* doit2_day_label_new (Doit2Day* day);
Doit2DayLabel* doit2_day_label_construct (GType object_type,
                                          Doit2Day* day);
GType doit2_day_label_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (Doit2DayLabel, g_object_unref)
static void doit2_to_do_display_finalize (GObject * obj);
static GType doit2_to_do_display_get_type_once (void);

static inline gpointer
doit2_to_do_display_get_instance_private (Doit2ToDoDisplay* self)
{
	return G_STRUCT_MEMBER_P (self, Doit2ToDoDisplay_private_offset);
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 10 "../src/tododisplay.vala"
	return self ? g_object_ref (self) : NULL;
#line 121 "tododisplay.c"
}

Doit2ToDoDisplay*
doit2_to_do_display_construct (GType object_type,
                               Doit2ToDo* item)
{
	Doit2ToDoDisplay * self = NULL;
	GtkLabel* _tmp13_;
	const gchar* _tmp14_;
#line 9 "../src/tododisplay.vala"
	g_return_val_if_fail (item != NULL, NULL);
#line 9 "../src/tododisplay.vala"
	self = (Doit2ToDoDisplay*) g_object_new (object_type, NULL);
#line 135 "tododisplay.c"
	{
		GeeArrayList* _day_list = NULL;
		GeeArrayList* _tmp0_;
		GeeArrayList* _tmp1_;
		gint _day_size = 0;
		GeeArrayList* _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		gint _day_index = 0;
#line 10 "../src/tododisplay.vala"
		_tmp0_ = item->days;
#line 10 "../src/tododisplay.vala"
		_tmp1_ = _g_object_ref0 (_tmp0_);
#line 10 "../src/tododisplay.vala"
		_day_list = _tmp1_;
#line 10 "../src/tododisplay.vala"
		_tmp2_ = _day_list;
#line 10 "../src/tododisplay.vala"
		_tmp3_ = gee_abstract_collection_get_size ((GeeAbstractCollection*) _tmp2_);
#line 10 "../src/tododisplay.vala"
		_tmp4_ = _tmp3_;
#line 10 "../src/tododisplay.vala"
		_day_size = _tmp4_;
#line 10 "../src/tododisplay.vala"
		_day_index = -1;
#line 10 "../src/tododisplay.vala"
		while (TRUE) {
#line 163 "tododisplay.c"
			gint _tmp5_;
			gint _tmp6_;
			Doit2Day* day = NULL;
			GeeArrayList* _tmp7_;
			gpointer _tmp8_;
			GtkBox* _tmp9_;
			Doit2Day* _tmp10_;
			Doit2DayLabel* _tmp11_;
			Doit2DayLabel* _tmp12_;
#line 10 "../src/tododisplay.vala"
			_day_index = _day_index + 1;
#line 10 "../src/tododisplay.vala"
			_tmp5_ = _day_index;
#line 10 "../src/tododisplay.vala"
			_tmp6_ = _day_size;
#line 10 "../src/tododisplay.vala"
			if (!(_tmp5_ < _tmp6_)) {
#line 10 "../src/tododisplay.vala"
				break;
#line 183 "tododisplay.c"
			}
#line 10 "../src/tododisplay.vala"
			_tmp7_ = _day_list;
#line 10 "../src/tododisplay.vala"
			_tmp8_ = gee_abstract_list_get ((GeeAbstractList*) _tmp7_, _day_index);
#line 10 "../src/tododisplay.vala"
			day = (Doit2Day*) _tmp8_;
#line 11 "../src/tododisplay.vala"
			_tmp9_ = self->priv->days_box;
#line 11 "../src/tododisplay.vala"
			_tmp10_ = day;
#line 11 "../src/tododisplay.vala"
			_tmp11_ = doit2_day_label_new (_tmp10_);
#line 11 "../src/tododisplay.vala"
			g_object_ref_sink (_tmp11_);
#line 11 "../src/tododisplay.vala"
			_tmp12_ = _tmp11_;
#line 11 "../src/tododisplay.vala"
			gtk_container_add ((GtkContainer*) _tmp9_, (GtkWidget*) _tmp12_);
#line 11 "../src/tododisplay.vala"
			_g_object_unref0 (_tmp12_);
#line 10 "../src/tododisplay.vala"
			_g_object_unref0 (day);
#line 207 "tododisplay.c"
		}
#line 10 "../src/tododisplay.vala"
		_g_object_unref0 (_day_list);
#line 211 "tododisplay.c"
	}
#line 13 "../src/tododisplay.vala"
	_tmp13_ = self->priv->description;
#line 13 "../src/tododisplay.vala"
	_tmp14_ = item->description;
#line 13 "../src/tododisplay.vala"
	gtk_label_set_text (_tmp13_, _tmp14_);
#line 9 "../src/tododisplay.vala"
	return self;
#line 221 "tododisplay.c"
}

Doit2ToDoDisplay*
doit2_to_do_display_new (Doit2ToDo* item)
{
#line 9 "../src/tododisplay.vala"
	return doit2_to_do_display_construct (DOIT2_TYPE_TO_DO_DISPLAY, item);
#line 229 "tododisplay.c"
}

static void
doit2_to_do_display_class_init (Doit2ToDoDisplayClass * klass,
                                gpointer klass_data)
{
#line 5 "../src/tododisplay.vala"
	doit2_to_do_display_parent_class = g_type_class_peek_parent (klass);
#line 5 "../src/tododisplay.vala"
	g_type_class_adjust_private_offset (klass, &Doit2ToDoDisplay_private_offset);
#line 5 "../src/tododisplay.vala"
	G_OBJECT_CLASS (klass)->finalize = doit2_to_do_display_finalize;
#line 5 "../src/tododisplay.vala"
	gtk_widget_class_set_template_from_resource (GTK_WIDGET_CLASS (klass), "/com/munchkinhalfling/DoIt2/tododisplay.ui");
#line 5 "../src/tododisplay.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "description", FALSE, Doit2ToDoDisplay_private_offset + G_STRUCT_OFFSET (Doit2ToDoDisplayPrivate, description));
#line 5 "../src/tododisplay.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "days_box", FALSE, Doit2ToDoDisplay_private_offset + G_STRUCT_OFFSET (Doit2ToDoDisplayPrivate, days_box));
#line 248 "tododisplay.c"
}

static void
doit2_to_do_display_instance_init (Doit2ToDoDisplay * self,
                                   gpointer klass)
{
#line 5 "../src/tododisplay.vala"
	self->priv = doit2_to_do_display_get_instance_private (self);
#line 5 "../src/tododisplay.vala"
	gtk_widget_init_template (GTK_WIDGET (self));
#line 259 "tododisplay.c"
}

static void
doit2_to_do_display_finalize (GObject * obj)
{
	Doit2ToDoDisplay * self;
#line 5 "../src/tododisplay.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, DOIT2_TYPE_TO_DO_DISPLAY, Doit2ToDoDisplay);
#line 7 "../src/tododisplay.vala"
	_g_object_unref0 (self->priv->description);
#line 8 "../src/tododisplay.vala"
	_g_object_unref0 (self->priv->days_box);
#line 5 "../src/tododisplay.vala"
	G_OBJECT_CLASS (doit2_to_do_display_parent_class)->finalize (obj);
#line 274 "tododisplay.c"
}

static GType
doit2_to_do_display_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (Doit2ToDoDisplayClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) doit2_to_do_display_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Doit2ToDoDisplay), 0, (GInstanceInitFunc) doit2_to_do_display_instance_init, NULL };
	GType doit2_to_do_display_type_id;
	doit2_to_do_display_type_id = g_type_register_static (gtk_box_get_type (), "Doit2ToDoDisplay", &g_define_type_info, 0);
	Doit2ToDoDisplay_private_offset = g_type_add_instance_private (doit2_to_do_display_type_id, sizeof (Doit2ToDoDisplayPrivate));
	return doit2_to_do_display_type_id;
}

GType
doit2_to_do_display_get_type (void)
{
	static volatile gsize doit2_to_do_display_type_id__volatile = 0;
	if (g_once_init_enter (&doit2_to_do_display_type_id__volatile)) {
		GType doit2_to_do_display_type_id;
		doit2_to_do_display_type_id = doit2_to_do_display_get_type_once ();
		g_once_init_leave (&doit2_to_do_display_type_id__volatile, doit2_to_do_display_type_id);
	}
	return doit2_to_do_display_type_id__volatile;
}

