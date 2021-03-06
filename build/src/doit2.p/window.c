/* window.c generated by valac 0.50.2, the Vala compiler
 * generated from window.vala, do not modify */

/* window.vala
 *
 * Copyright 2020 munchkinhalfling
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtk/gtk.h>
#include <glib-object.h>
#include <gio/gio.h>
#include <glib.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>
#include <json-glib/json-glib.h>

#define DOIT2_TYPE_WINDOW (doit2_window_get_type ())
#define DOIT2_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DOIT2_TYPE_WINDOW, Doit2Window))
#define DOIT2_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DOIT2_TYPE_WINDOW, Doit2WindowClass))
#define DOIT2_IS_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DOIT2_TYPE_WINDOW))
#define DOIT2_IS_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DOIT2_TYPE_WINDOW))
#define DOIT2_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DOIT2_TYPE_WINDOW, Doit2WindowClass))

typedef struct _Doit2Window Doit2Window;
typedef struct _Doit2WindowClass Doit2WindowClass;
typedef struct _Doit2WindowPrivate Doit2WindowPrivate;
enum  {
	DOIT2_WINDOW_0_PROPERTY,
	DOIT2_WINDOW_NUM_PROPERTIES
};
static GParamSpec* doit2_window_properties[DOIT2_WINDOW_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define DOIT2_TYPE_TO_DO (doit2_to_do_get_type ())
#define DOIT2_TO_DO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DOIT2_TYPE_TO_DO, Doit2ToDo))
#define DOIT2_TO_DO_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DOIT2_TYPE_TO_DO, Doit2ToDoClass))
#define DOIT2_IS_TO_DO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DOIT2_TYPE_TO_DO))
#define DOIT2_IS_TO_DO_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DOIT2_TYPE_TO_DO))
#define DOIT2_TO_DO_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DOIT2_TYPE_TO_DO, Doit2ToDoClass))

typedef struct _Doit2ToDo Doit2ToDo;
typedef struct _Doit2ToDoClass Doit2ToDoClass;

#define DOIT2_TYPE_ADD_TO_DO_DIALOG (doit2_add_to_do_dialog_get_type ())
#define DOIT2_ADD_TO_DO_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DOIT2_TYPE_ADD_TO_DO_DIALOG, Doit2AddToDoDialog))
#define DOIT2_ADD_TO_DO_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DOIT2_TYPE_ADD_TO_DO_DIALOG, Doit2AddToDoDialogClass))
#define DOIT2_IS_ADD_TO_DO_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DOIT2_TYPE_ADD_TO_DO_DIALOG))
#define DOIT2_IS_ADD_TO_DO_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DOIT2_TYPE_ADD_TO_DO_DIALOG))
#define DOIT2_ADD_TO_DO_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DOIT2_TYPE_ADD_TO_DO_DIALOG, Doit2AddToDoDialogClass))

typedef struct _Doit2AddToDoDialog Doit2AddToDoDialog;
typedef struct _Doit2AddToDoDialogClass Doit2AddToDoDialogClass;

#define DOIT2_TYPE_DAY (doit2_day_get_type ())
#define DOIT2_DAY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DOIT2_TYPE_DAY, Doit2Day))
#define DOIT2_DAY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DOIT2_TYPE_DAY, Doit2DayClass))
#define DOIT2_IS_DAY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DOIT2_TYPE_DAY))
#define DOIT2_IS_DAY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DOIT2_TYPE_DAY))
#define DOIT2_DAY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DOIT2_TYPE_DAY, Doit2DayClass))

typedef struct _Doit2Day Doit2Day;
typedef struct _Doit2DayClass Doit2DayClass;
typedef struct _Doit2AddToDoDialogPrivate Doit2AddToDoDialogPrivate;
typedef struct _Doit2ToDoPrivate Doit2ToDoPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _Doit2WindowNewData Doit2WindowNewData;

struct _Doit2Window {
	GtkApplicationWindow parent_instance;
	Doit2WindowPrivate * priv;
};

struct _Doit2WindowClass {
	GtkApplicationWindowClass parent_class;
};

struct _Doit2WindowPrivate {
	GtkStack* items;
	GtkButton* add_btn;
};

struct _Doit2AddToDoDialog {
	GtkDialog parent_instance;
	Doit2AddToDoDialogPrivate * priv;
	GtkEntry* name;
	GtkTextView* description;
};

struct _Doit2AddToDoDialogClass {
	GtkDialogClass parent_class;
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

struct _Doit2WindowNewData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GTask* _async_result;
	GType object_type;
	Doit2Window* self;
	GtkApplication* app;
	GtkStack* _tmp0_;
	GeeArrayList* _tmp1_;
	GtkButton* _tmp2_;
};

static gint Doit2Window_private_offset;
static gpointer doit2_window_parent_class = NULL;
extern GeeArrayList* doit2_util_todos;

GType doit2_window_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (Doit2Window, g_object_unref)
static void doit2_window_construct_data_free (gpointer _data);
void doit2_window_new (GtkApplication* app,
                       GAsyncReadyCallback _callback_,
                       gpointer _user_data_);
Doit2Window* doit2_window_new_finish (GAsyncResult* _res_);
void doit2_window_construct (GType object_type,
                             GtkApplication* app,
                             GAsyncReadyCallback _callback_,
                             gpointer _user_data_);
Doit2Window* doit2_window_construct_finish (GAsyncResult* _res_);
static gboolean doit2_window_construct_co (Doit2WindowNewData* _data_);
GType doit2_to_do_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (Doit2ToDo, g_object_unref)
void doit2_util_refresh_list (GtkStack* list,
                              GeeArrayList* todos);
static void __lambda5_ (Doit2Window* self);
GType doit2_add_to_do_dialog_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (Doit2AddToDoDialog, g_object_unref)
Doit2AddToDoDialog* doit2_add_to_do_dialog_new (void);
Doit2AddToDoDialog* doit2_add_to_do_dialog_construct (GType object_type);
GType doit2_day_get_type (void) G_GNUC_CONST;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (Doit2Day, g_object_unref)
GeeArrayList* doit2_add_to_do_dialog_get_days (Doit2AddToDoDialog* self);
Doit2ToDo* doit2_to_do_new (void);
Doit2ToDo* doit2_to_do_construct (GType object_type);
void doit2_util_save_todos (GAsyncReadyCallback _callback_,
                            gpointer _user_data_);
void doit2_util_save_todos_finish (GAsyncResult* _res_);
static void ___lambda5__gtk_button_clicked (GtkButton* _sender,
                                     gpointer self);
static void doit2_window_finalize (GObject * obj);
static GType doit2_window_get_type_once (void);

static inline gpointer
doit2_window_get_instance_private (Doit2Window* self)
{
	return G_STRUCT_MEMBER_P (self, Doit2Window_private_offset);
}

static void
doit2_window_construct_data_free (gpointer _data)
{
	Doit2WindowNewData* _data_;
	_data_ = _data;
#line 24 "../src/window.vala"
	_g_object_unref0 (_data_->app);
#line 24 "../src/window.vala"
	_g_object_unref0 (_data_->self);
#line 24 "../src/window.vala"
	g_slice_free (Doit2WindowNewData, _data_);
#line 192 "window.c"
}

static gpointer
_g_object_ref0 (gpointer self)
{
#line 24 "../src/window.vala"
	return self ? g_object_ref (self) : NULL;
#line 200 "window.c"
}

void
doit2_window_construct (GType object_type,
                        GtkApplication* app,
                        GAsyncReadyCallback _callback_,
                        gpointer _user_data_)
{
	Doit2WindowNewData* _data_;
	GtkApplication* _tmp0_;
#line 24 "../src/window.vala"
	g_return_if_fail (app != NULL);
#line 24 "../src/window.vala"
	_data_ = g_slice_new0 (Doit2WindowNewData);
#line 24 "../src/window.vala"
	_data_->_async_result = g_task_new (NULL, NULL, _callback_, _user_data_);
#line 24 "../src/window.vala"
	g_task_set_task_data (_data_->_async_result, _data_, doit2_window_construct_data_free);
#line 24 "../src/window.vala"
	_data_->object_type = object_type;
#line 24 "../src/window.vala"
	_tmp0_ = _g_object_ref0 (app);
#line 24 "../src/window.vala"
	_g_object_unref0 (_data_->app);
#line 24 "../src/window.vala"
	_data_->app = _tmp0_;
#line 24 "../src/window.vala"
	doit2_window_construct_co (_data_);
#line 229 "window.c"
}

Doit2Window*
doit2_window_construct_finish (GAsyncResult* _res_)
{
	Doit2Window* result;
	Doit2WindowNewData* _data_;
#line 24 "../src/window.vala"
	_data_ = g_task_propagate_pointer (G_TASK (_res_), NULL);
#line 24 "../src/window.vala"
	result = _data_->self;
#line 24 "../src/window.vala"
	_data_->self = NULL;
#line 24 "../src/window.vala"
	return result;
#line 245 "window.c"
}

static void
__lambda5_ (Doit2Window* self)
{
	Doit2AddToDoDialog* dlg = NULL;
	Doit2AddToDoDialog* _tmp0_;
	GeeArrayList* days = NULL;
	GeeArrayList* _tmp1_;
	GeeArrayList* _tmp2_;
	GtkEntry* _tmp3_;
	const gchar* _tmp4_;
	const gchar* _tmp5_;
	gchar* _tmp6_;
	GtkTextView* _tmp7_;
	GtkTextBuffer* _tmp8_;
	GtkTextBuffer* _tmp9_;
	gchar* _tmp10_;
	gchar* _tmp11_;
	GeeArrayList* _tmp12_;
	Doit2ToDo* _tmp13_ = NULL;
	Doit2ToDo* _tmp14_;
	GtkStack* _tmp15_;
	GeeArrayList* _tmp16_;
#line 29 "../src/window.vala"
	_tmp0_ = doit2_add_to_do_dialog_new ();
#line 29 "../src/window.vala"
	g_object_ref_sink (_tmp0_);
#line 29 "../src/window.vala"
	dlg = _tmp0_;
#line 30 "../src/window.vala"
	gtk_dialog_run ((GtkDialog*) dlg);
#line 31 "../src/window.vala"
	_tmp1_ = doit2_add_to_do_dialog_get_days (dlg);
#line 31 "../src/window.vala"
	days = _tmp1_;
#line 32 "../src/window.vala"
	_tmp2_ = doit2_util_todos;
#line 32 "../src/window.vala"
	_tmp3_ = dlg->name;
#line 32 "../src/window.vala"
	_tmp4_ = gtk_entry_get_text (_tmp3_);
#line 32 "../src/window.vala"
	_tmp5_ = _tmp4_;
#line 32 "../src/window.vala"
	_tmp6_ = g_strdup (_tmp5_);
#line 32 "../src/window.vala"
	_tmp7_ = dlg->description;
#line 32 "../src/window.vala"
	_tmp8_ = gtk_text_view_get_buffer (_tmp7_);
#line 32 "../src/window.vala"
	_tmp9_ = _tmp8_;
#line 32 "../src/window.vala"
	g_object_get (_tmp9_, "text", &_tmp10_, NULL);
#line 32 "../src/window.vala"
	_tmp11_ = _tmp10_;
#line 32 "../src/window.vala"
	_tmp12_ = _g_object_ref0 (days);
#line 32 "../src/window.vala"
	_tmp13_ = doit2_to_do_new ();
#line 32 "../src/window.vala"
	_g_free0 (_tmp13_->name);
#line 32 "../src/window.vala"
	_tmp13_->name = _tmp6_;
#line 32 "../src/window.vala"
	_g_free0 (_tmp13_->description);
#line 32 "../src/window.vala"
	_tmp13_->description = _tmp11_;
#line 32 "../src/window.vala"
	_g_object_unref0 (_tmp13_->days);
#line 32 "../src/window.vala"
	_tmp13_->days = _tmp12_;
#line 32 "../src/window.vala"
	_tmp14_ = _tmp13_;
#line 32 "../src/window.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp2_, _tmp14_);
#line 32 "../src/window.vala"
	_g_object_unref0 (_tmp14_);
#line 37 "../src/window.vala"
	_tmp15_ = self->priv->items;
#line 37 "../src/window.vala"
	_tmp16_ = doit2_util_todos;
#line 37 "../src/window.vala"
	doit2_util_refresh_list (_tmp15_, _tmp16_);
#line 38 "../src/window.vala"
	doit2_util_save_todos (NULL, NULL);
#line 28 "../src/window.vala"
	_g_object_unref0 (days);
#line 28 "../src/window.vala"
	_g_object_unref0 (dlg);
#line 336 "window.c"
}

static void
___lambda5__gtk_button_clicked (GtkButton* _sender,
                                gpointer self)
{
#line 28 "../src/window.vala"
	__lambda5_ ((Doit2Window*) self);
#line 345 "window.c"
}

static gboolean
doit2_window_construct_co (Doit2WindowNewData* _data_)
{
#line 24 "../src/window.vala"
	switch (_data_->_state_) {
#line 24 "../src/window.vala"
		case 0:
#line 355 "window.c"
		goto _state_0;
		default:
#line 24 "../src/window.vala"
		g_assert_not_reached ();
#line 360 "window.c"
	}
	_state_0:
#line 25 "../src/window.vala"
	_data_->self = (Doit2Window*) g_object_new (_data_->object_type, "application", _data_->app, NULL);
#line 27 "../src/window.vala"
	_data_->_tmp0_ = _data_->self->priv->items;
#line 27 "../src/window.vala"
	_data_->_tmp1_ = doit2_util_todos;
#line 27 "../src/window.vala"
	doit2_util_refresh_list (_data_->_tmp0_, _data_->_tmp1_);
#line 28 "../src/window.vala"
	_data_->_tmp2_ = _data_->self->priv->add_btn;
#line 28 "../src/window.vala"
	g_signal_connect_object (_data_->_tmp2_, "clicked", (GCallback) ___lambda5__gtk_button_clicked, _data_->self, 0);
#line 24 "../src/window.vala"
	g_task_return_pointer (_data_->_async_result, _data_, NULL);
#line 24 "../src/window.vala"
	if (_data_->_state_ != 0) {
#line 24 "../src/window.vala"
		while (!g_task_get_completed (_data_->_async_result)) {
#line 24 "../src/window.vala"
			g_main_context_iteration (g_task_get_context (_data_->_async_result), TRUE);
#line 383 "window.c"
		}
	}
#line 24 "../src/window.vala"
	g_object_unref (_data_->_async_result);
#line 24 "../src/window.vala"
	return FALSE;
#line 390 "window.c"
}

void
doit2_window_new (GtkApplication* app,
                  GAsyncReadyCallback _callback_,
                  gpointer _user_data_)
{
#line 24 "../src/window.vala"
	doit2_window_construct (DOIT2_TYPE_WINDOW, app, _callback_, _user_data_);
#line 400 "window.c"
}

Doit2Window*
doit2_window_new_finish (GAsyncResult* _res_)
{
#line 24 "../src/window.vala"
	return doit2_window_construct_finish (_res_);
#line 408 "window.c"
}

static void
doit2_window_class_init (Doit2WindowClass * klass,
                         gpointer klass_data)
{
#line 21 "../src/window.vala"
	doit2_window_parent_class = g_type_class_peek_parent (klass);
#line 21 "../src/window.vala"
	g_type_class_adjust_private_offset (klass, &Doit2Window_private_offset);
#line 21 "../src/window.vala"
	G_OBJECT_CLASS (klass)->finalize = doit2_window_finalize;
#line 21 "../src/window.vala"
	gtk_widget_class_set_template_from_resource (GTK_WIDGET_CLASS (klass), "/com/munchkinhalfling/DoIt2/window.ui");
#line 21 "../src/window.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "items", FALSE, Doit2Window_private_offset + G_STRUCT_OFFSET (Doit2WindowPrivate, items));
#line 21 "../src/window.vala"
	gtk_widget_class_bind_template_child_full (GTK_WIDGET_CLASS (klass), "add_btn", FALSE, Doit2Window_private_offset + G_STRUCT_OFFSET (Doit2WindowPrivate, add_btn));
#line 427 "window.c"
}

static void
doit2_window_instance_init (Doit2Window * self,
                            gpointer klass)
{
#line 21 "../src/window.vala"
	self->priv = doit2_window_get_instance_private (self);
#line 21 "../src/window.vala"
	gtk_widget_init_template (GTK_WIDGET (self));
#line 438 "window.c"
}

static void
doit2_window_finalize (GObject * obj)
{
	Doit2Window * self;
#line 21 "../src/window.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, DOIT2_TYPE_WINDOW, Doit2Window);
#line 22 "../src/window.vala"
	_g_object_unref0 (self->priv->items);
#line 23 "../src/window.vala"
	_g_object_unref0 (self->priv->add_btn);
#line 21 "../src/window.vala"
	G_OBJECT_CLASS (doit2_window_parent_class)->finalize (obj);
#line 453 "window.c"
}

static GType
doit2_window_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (Doit2WindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) doit2_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (Doit2Window), 0, (GInstanceInitFunc) doit2_window_instance_init, NULL };
	GType doit2_window_type_id;
	doit2_window_type_id = g_type_register_static (gtk_application_window_get_type (), "Doit2Window", &g_define_type_info, 0);
	Doit2Window_private_offset = g_type_add_instance_private (doit2_window_type_id, sizeof (Doit2WindowPrivate));
	return doit2_window_type_id;
}

GType
doit2_window_get_type (void)
{
	static volatile gsize doit2_window_type_id__volatile = 0;
	if (g_once_init_enter (&doit2_window_type_id__volatile)) {
		GType doit2_window_type_id;
		doit2_window_type_id = doit2_window_get_type_once ();
		g_once_init_leave (&doit2_window_type_id__volatile, doit2_window_type_id);
	}
	return doit2_window_type_id__volatile;
}

