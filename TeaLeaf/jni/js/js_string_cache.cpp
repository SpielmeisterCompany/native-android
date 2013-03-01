
#include "js/js.h"

using v8::Persistent;
using v8::String;

Persistent<String> STRING_CACHE_restore;
Persistent<String> STRING_CACHE_show;
Persistent<String> STRING_CACHE_onLine;
Persistent<String> STRING_CACHE_getFileSync;
Persistent<String> STRING_CACHE_newTexture;
Persistent<String> STRING_CACHE_gc;
Persistent<String> STRING_CACHE_url;
Persistent<String> STRING_CACHE__ctx;
Persistent<String> STRING_CACHE_y1;
Persistent<String> STRING_CACHE_userAgent;
Persistent<String> STRING_CACHE_gl;
Persistent<String> STRING_CACHE_spaceWidth;
Persistent<String> STRING_CACHE_textbox;
Persistent<String> STRING_CACHE_getCurrentTimeMicroseconds;
Persistent<String> STRING_CACHE_style;
Persistent<String> STRING_CACHE_startGame;
Persistent<String> STRING_CACHE_console;
Persistent<String> STRING_CACHE_send;
Persistent<String> STRING_CACHE_drawPointSprites;
Persistent<String> STRING_CACHE_supported;
Persistent<String> STRING_CACHE_window;
Persistent<String> STRING_CACHE_stopSound;
Persistent<String> STRING_CACHE_location;
Persistent<String> STRING_CACHE_densityDpi;
Persistent<String> STRING_CACHE_hasVibrator;
Persistent<String> STRING_CACHE_save;
Persistent<String> STRING_CACHE_hide;
Persistent<String> STRING_CACHE_Socket;
Persistent<String> STRING_CACHE_playBackgroundMusic;
Persistent<String> STRING_CACHE_fillRect;
Persistent<String> STRING_CACHE_gameHash;
Persistent<String> STRING_CACHE_tcpPort;
Persistent<String> STRING_CACHE_stop;
Persistent<String> STRING_CACHE_onResize;
Persistent<String> STRING_CACHE_flushDrawImage;
Persistent<String> STRING_CACHE_textBaseline;
Persistent<String> STRING_CACHE_removeItem;
Persistent<String> STRING_CACHE__src;
Persistent<String> STRING_CACHE_clearRect;
Persistent<String> STRING_CACHE_textAlign;
Persistent<String> STRING_CACHE_rotate;
Persistent<String> STRING_CACHE_name;
Persistent<String> STRING_CACHE_h;
Persistent<String> STRING_CACHE_fillTextBitmap;
Persistent<String> STRING_CACHE_loadIdentity;
Persistent<String> STRING_CACHE_reload;
Persistent<String> STRING_CACHE_simulateID;
Persistent<String> STRING_CACHE_x;
Persistent<String> STRING_CACHE_getOpacity;
Persistent<String> STRING_CACHE_vibrate;
Persistent<String> STRING_CACHE_setLocation;
Persistent<String> STRING_CACHE_haptics;
Persistent<String> STRING_CACHE_locale;
Persistent<String> STRING_CACHE_clearInterval;
Persistent<String> STRING_CACHE_Context2D;
Persistent<String> STRING_CACHE_getVisible;
Persistent<String> STRING_CACHE_cancel;
Persistent<String> STRING_CACHE_deleteAllTextures;
Persistent<String> STRING_CACHE___type;
Persistent<String> STRING_CACHE_plugins;
Persistent<String> STRING_CACHE_images;
Persistent<String> STRING_CACHE_close;
Persistent<String> STRING_CACHE_getValue;
Persistent<String> STRING_CACHE_canvas;
Persistent<String> STRING_CACHE_scale;
Persistent<String> STRING_CACHE_drawImage;
Persistent<String> STRING_CACHE_dimensions;
Persistent<String> STRING_CACHE_onConnect;
Persistent<String> STRING_CACHE_bottom;
Persistent<String> STRING_CACHE_pattern;
Persistent<String> STRING_CACHE_sdkHash;
Persistent<String> STRING_CACHE_flushImages;
Persistent<String> STRING_CACHE__showDialog;
Persistent<String> STRING_CACHE_loadSound;
Persistent<String> STRING_CACHE_setType;
Persistent<String> STRING_CACHE_onClose;
Persistent<String> STRING_CACHE_setValue;
Persistent<String> STRING_CACHE_vertical;
Persistent<String> STRING_CACHE_screen;
Persistent<String> STRING_CACHE_displayMetrics;
Persistent<String> STRING_CACHE_customFont;
Persistent<String> STRING_CACHE_setGlobalAlpha;
Persistent<String> STRING_CACHE_InputEvent;
Persistent<String> STRING_CACHE_onResult;
Persistent<String> STRING_CACHE_ERROR;
Persistent<String> STRING_CACHE_setPosition;
Persistent<String> STRING_CACHE_setTimeout;
Persistent<String> STRING_CACHE_runMaybeGC;
Persistent<String> STRING_CACHE_c;
Persistent<String> STRING_CACHE_g;
Persistent<String> STRING_CACHE_oh;
Persistent<String> STRING_CACHE_country;
Persistent<String> STRING_CACHE___id;
Persistent<String> STRING_CACHE_timer;
Persistent<String> STRING_CACHE_fillTextBitmapDeprecated;
Persistent<String> STRING_CACHE_length;
Persistent<String> STRING_CACHE_w;
Persistent<String> STRING_CACHE_pauseSound;
Persistent<String> STRING_CACHE_ow;
Persistent<String> STRING_CACHE_CONFIG;
Persistent<String> STRING_CACHE_load;
Persistent<String> STRING_CACHE_eval;
Persistent<String> STRING_CACHE_render;
Persistent<String> STRING_CACHE_sendEvent;
Persistent<String> STRING_CACHE__loadImage;
Persistent<String> STRING_CACHE_timestep;
Persistent<String> STRING_CACHE_loadBackgroundMusic;
Persistent<String> STRING_CACHE_GLOBAL;
Persistent<String> STRING_CACHE_height;
Persistent<String> STRING_CACHE_getWidth;
Persistent<String> STRING_CACHE_visible;
Persistent<String> STRING_CACHE_touchTexture;
Persistent<String> STRING_CACHE_measureText;
Persistent<String> STRING_CACHE_enableScissor;
Persistent<String> STRING_CACHE_navigator;
Persistent<String> STRING_CACHE_market;
Persistent<String> STRING_CACHE_NATIVE;
Persistent<String> STRING_CACHE_log;
Persistent<String> STRING_CACHE_confirmPurchase;
Persistent<String> STRING_CACHE_width;
Persistent<String> STRING_CACHE_create;
Persistent<String> STRING_CACHE_clearTimeout;
Persistent<String> STRING_CACHE_sendActivityToBack;
Persistent<String> STRING_CACHE_fillText;
Persistent<String> STRING_CACHE_PROFILER;
Persistent<String> STRING_CACHE_runGC;
Persistent<String> STRING_CACHE_start;
Persistent<String> STRING_CACHE_camera;
Persistent<String> STRING_CACHE_localStorage;
Persistent<String> STRING_CACHE_onRead;
Persistent<String> STRING_CACHE_getNextId;
Persistent<String> STRING_CACHE_onAnimationFinish;
Persistent<String> STRING_CACHE_type;
Persistent<String> STRING_CACHE_milliseconds;
Persistent<String> STRING_CACHE_setVolume;
Persistent<String> STRING_CACHE_nativeHash;
Persistent<String> STRING_CACHE_measureTextBitmap;
Persistent<String> STRING_CACHE_globalID;
Persistent<String> STRING_CACHE_setInterval;
Persistent<String> STRING_CACHE_getType;
Persistent<String> STRING_CACHE_applyUpdate;
Persistent<String> STRING_CACHE___gl_name;
Persistent<String> STRING_CACHE_inputPrompt;
Persistent<String> STRING_CACHE_language;
Persistent<String> STRING_CACHE_androidHash;
Persistent<String> STRING_CACHE_playSound;
Persistent<String> STRING_CACHE_x1;
Persistent<String> STRING_CACHE_usedHeap;
Persistent<String> STRING_CACHE_viewport;
Persistent<String> STRING_CACHE_sound;
Persistent<String> STRING_CACHE_none;
Persistent<String> STRING_CACHE_b;
Persistent<String> STRING_CACHE__fillText;
Persistent<String> STRING_CACHE_addFilter;
Persistent<String> STRING_CACHE_enabled;
Persistent<String> STRING_CACHE_deviceUUID;
Persistent<String> STRING_CACHE_profiler;
Persistent<String> STRING_CACHE_xhr;
Persistent<String> STRING_CACHE_r;
Persistent<String> STRING_CACHE_strokeRect;
Persistent<String> STRING_CACHE_dispatchEvent;
Persistent<String> STRING_CACHE_setVisible;
Persistent<String> STRING_CACHE_setDimensions;
Persistent<String> STRING_CACHE_HAS_NATIVE_IMPL;
Persistent<String> STRING_CACHE_onerror;
Persistent<String> STRING_CACHE_tcpHost;
Persistent<String> STRING_CACHE_getX;
Persistent<String> STRING_CACHE_getY;
Persistent<String> STRING_CACHE_buy;
Persistent<String> STRING_CACHE_uploadDeviceInfo;
Persistent<String> STRING_CACHE_native_info;
Persistent<String> STRING_CACHE_tick;
Persistent<String> STRING_CACHE_versionCode;
Persistent<String> STRING_CACHE_baseline;
Persistent<String> STRING_CACHE_translate;
Persistent<String> STRING_CACHE_getHeight;
Persistent<String> STRING_CACHE_setOpacity;
Persistent<String> STRING_CACHE_strokeText;
Persistent<String> STRING_CACHE_disableScissor;
Persistent<String> STRING_CACHE_build;
Persistent<String> STRING_CACHE_destroy;
Persistent<String> STRING_CACHE_events;
Persistent<String> STRING_CACHE_deleteTexture;
Persistent<String> STRING_CACHE_clearFilters;
Persistent<String> STRING_CACHE_setItem;
Persistent<String> STRING_CACHE_needsReflow;
Persistent<String> STRING_CACHE_getItem;
Persistent<String> STRING_CACHE_device;
Persistent<String> STRING_CACHE_dialogs;
Persistent<String> STRING_CACHE_horizontal;
Persistent<String> STRING_CACHE___view;
Persistent<String> STRING_CACHE_gallery;
Persistent<String> STRING_CACHE_repeat;
Persistent<String> STRING_CACHE_a;
Persistent<String> STRING_CACHE_purchase;
Persistent<String> STRING_CACHE_tracking;
Persistent<String> STRING_CACHE_outline;
Persistent<String> STRING_CACHE___log;
Persistent<String> STRING_CACHE_i;
Persistent<String> STRING_CACHE_getGlobalAlpha;
Persistent<String> STRING_CACHE_clear;
Persistent<String> STRING_CACHE_overlay;
Persistent<String> STRING_CACHE_uri;
Persistent<String> STRING_CACHE_installReferrer;
Persistent<String> STRING_CACHE_y;
Persistent<String> STRING_CACHE_doneLoading;
Persistent<String> STRING_CACHE_failed;
Persistent<String> STRING_CACHE_devicePixelRatio;


void js_string_cache_init() {
	STRING_CACHE_restore = Persistent<String>::New(String::New("restore"));
	STRING_CACHE_show = Persistent<String>::New(String::New("show"));
	STRING_CACHE_onLine = Persistent<String>::New(String::New("onLine"));
	STRING_CACHE_getFileSync = Persistent<String>::New(String::New("getFileSync"));
	STRING_CACHE_newTexture = Persistent<String>::New(String::New("newTexture"));
	STRING_CACHE_gc = Persistent<String>::New(String::New("gc"));
	STRING_CACHE_url = Persistent<String>::New(String::New("url"));
	STRING_CACHE__ctx = Persistent<String>::New(String::New("_ctx"));
	STRING_CACHE_y1 = Persistent<String>::New(String::New("y1"));
	STRING_CACHE_userAgent = Persistent<String>::New(String::New("userAgent"));
	STRING_CACHE_gl = Persistent<String>::New(String::New("gl"));
	STRING_CACHE_spaceWidth = Persistent<String>::New(String::New("spaceWidth"));
	STRING_CACHE_textbox = Persistent<String>::New(String::New("textbox"));
	STRING_CACHE_getCurrentTimeMicroseconds = Persistent<String>::New(String::New("getCurrentTimeMicroseconds"));
	STRING_CACHE_style = Persistent<String>::New(String::New("style"));
	STRING_CACHE_startGame = Persistent<String>::New(String::New("startGame"));
	STRING_CACHE_console = Persistent<String>::New(String::New("console"));
	STRING_CACHE_send = Persistent<String>::New(String::New("send"));
	STRING_CACHE_drawPointSprites = Persistent<String>::New(String::New("drawPointSprites"));
	STRING_CACHE_supported = Persistent<String>::New(String::New("supported"));
	STRING_CACHE_window = Persistent<String>::New(String::New("window"));
	STRING_CACHE_stopSound = Persistent<String>::New(String::New("stopSound"));
	STRING_CACHE_location = Persistent<String>::New(String::New("location"));
	STRING_CACHE_densityDpi = Persistent<String>::New(String::New("densityDpi"));
	STRING_CACHE_hasVibrator = Persistent<String>::New(String::New("hasVibrator"));
	STRING_CACHE_save = Persistent<String>::New(String::New("save"));
	STRING_CACHE_hide = Persistent<String>::New(String::New("hide"));
	STRING_CACHE_Socket = Persistent<String>::New(String::New("Socket"));
	STRING_CACHE_playBackgroundMusic = Persistent<String>::New(String::New("playBackgroundMusic"));
	STRING_CACHE_fillRect = Persistent<String>::New(String::New("fillRect"));
	STRING_CACHE_gameHash = Persistent<String>::New(String::New("gameHash"));
	STRING_CACHE_tcpPort = Persistent<String>::New(String::New("tcpPort"));
	STRING_CACHE_stop = Persistent<String>::New(String::New("stop"));
	STRING_CACHE_onResize = Persistent<String>::New(String::New("onResize"));
	STRING_CACHE_flushDrawImage = Persistent<String>::New(String::New("flushDrawImage"));
	STRING_CACHE_textBaseline = Persistent<String>::New(String::New("textBaseline"));
	STRING_CACHE_removeItem = Persistent<String>::New(String::New("removeItem"));
	STRING_CACHE__src = Persistent<String>::New(String::New("_src"));
	STRING_CACHE_clearRect = Persistent<String>::New(String::New("clearRect"));
	STRING_CACHE_textAlign = Persistent<String>::New(String::New("textAlign"));
	STRING_CACHE_rotate = Persistent<String>::New(String::New("rotate"));
	STRING_CACHE_name = Persistent<String>::New(String::New("name"));
	STRING_CACHE_h = Persistent<String>::New(String::New("h"));
	STRING_CACHE_fillTextBitmap = Persistent<String>::New(String::New("fillTextBitmap"));
	STRING_CACHE_loadIdentity = Persistent<String>::New(String::New("loadIdentity"));
	STRING_CACHE_reload = Persistent<String>::New(String::New("reload"));
	STRING_CACHE_simulateID = Persistent<String>::New(String::New("simulateID"));
	STRING_CACHE_x = Persistent<String>::New(String::New("x"));
	STRING_CACHE_getOpacity = Persistent<String>::New(String::New("getOpacity"));
	STRING_CACHE_vibrate = Persistent<String>::New(String::New("vibrate"));
	STRING_CACHE_setLocation = Persistent<String>::New(String::New("setLocation"));
	STRING_CACHE_haptics = Persistent<String>::New(String::New("haptics"));
	STRING_CACHE_locale = Persistent<String>::New(String::New("locale"));
	STRING_CACHE_clearInterval = Persistent<String>::New(String::New("clearInterval"));
	STRING_CACHE_Context2D = Persistent<String>::New(String::New("Context2D"));
	STRING_CACHE_getVisible = Persistent<String>::New(String::New("getVisible"));
	STRING_CACHE_cancel = Persistent<String>::New(String::New("cancel"));
	STRING_CACHE_deleteAllTextures = Persistent<String>::New(String::New("deleteAllTextures"));
	STRING_CACHE___type = Persistent<String>::New(String::New("__type"));
	STRING_CACHE_plugins = Persistent<String>::New(String::New("plugins"));
	STRING_CACHE_images = Persistent<String>::New(String::New("images"));
	STRING_CACHE_close = Persistent<String>::New(String::New("close"));
	STRING_CACHE_getValue = Persistent<String>::New(String::New("getValue"));
	STRING_CACHE_canvas = Persistent<String>::New(String::New("canvas"));
	STRING_CACHE_scale = Persistent<String>::New(String::New("scale"));
	STRING_CACHE_drawImage = Persistent<String>::New(String::New("drawImage"));
	STRING_CACHE_dimensions = Persistent<String>::New(String::New("dimensions"));
	STRING_CACHE_onConnect = Persistent<String>::New(String::New("onConnect"));
	STRING_CACHE_bottom = Persistent<String>::New(String::New("bottom"));
	STRING_CACHE_pattern = Persistent<String>::New(String::New("pattern"));
	STRING_CACHE_sdkHash = Persistent<String>::New(String::New("sdkHash"));
	STRING_CACHE_flushImages = Persistent<String>::New(String::New("flushImages"));
	STRING_CACHE__showDialog = Persistent<String>::New(String::New("_showDialog"));
	STRING_CACHE_loadSound = Persistent<String>::New(String::New("loadSound"));
	STRING_CACHE_setType = Persistent<String>::New(String::New("setType"));
	STRING_CACHE_onClose = Persistent<String>::New(String::New("onClose"));
	STRING_CACHE_setValue = Persistent<String>::New(String::New("setValue"));
	STRING_CACHE_vertical = Persistent<String>::New(String::New("vertical"));
	STRING_CACHE_screen = Persistent<String>::New(String::New("screen"));
	STRING_CACHE_displayMetrics = Persistent<String>::New(String::New("displayMetrics"));
	STRING_CACHE_customFont = Persistent<String>::New(String::New("customFont"));
	STRING_CACHE_setGlobalAlpha = Persistent<String>::New(String::New("setGlobalAlpha"));
	STRING_CACHE_InputEvent = Persistent<String>::New(String::New("InputEvent"));
	STRING_CACHE_onResult = Persistent<String>::New(String::New("onResult"));
	STRING_CACHE_ERROR = Persistent<String>::New(String::New("ERROR"));
	STRING_CACHE_setPosition = Persistent<String>::New(String::New("setPosition"));
	STRING_CACHE_setTimeout = Persistent<String>::New(String::New("setTimeout"));
	STRING_CACHE_runMaybeGC = Persistent<String>::New(String::New("runMaybeGC"));
	STRING_CACHE_c = Persistent<String>::New(String::New("c"));
	STRING_CACHE_g = Persistent<String>::New(String::New("g"));
	STRING_CACHE_oh = Persistent<String>::New(String::New("oh"));
	STRING_CACHE_country = Persistent<String>::New(String::New("country"));
	STRING_CACHE___id = Persistent<String>::New(String::New("__id"));
	STRING_CACHE_timer = Persistent<String>::New(String::New("timer"));
	STRING_CACHE_fillTextBitmapDeprecated = Persistent<String>::New(String::New("fillTextBitmapDeprecated"));
	STRING_CACHE_length = Persistent<String>::New(String::New("length"));
	STRING_CACHE_w = Persistent<String>::New(String::New("w"));
	STRING_CACHE_pauseSound = Persistent<String>::New(String::New("pauseSound"));
	STRING_CACHE_ow = Persistent<String>::New(String::New("ow"));
	STRING_CACHE_CONFIG = Persistent<String>::New(String::New("CONFIG"));
	STRING_CACHE_load = Persistent<String>::New(String::New("load"));
	STRING_CACHE_eval = Persistent<String>::New(String::New("eval"));
	STRING_CACHE_render = Persistent<String>::New(String::New("render"));
	STRING_CACHE_sendEvent = Persistent<String>::New(String::New("sendEvent"));
	STRING_CACHE__loadImage = Persistent<String>::New(String::New("_loadImage"));
	STRING_CACHE_timestep = Persistent<String>::New(String::New("timestep"));
	STRING_CACHE_loadBackgroundMusic = Persistent<String>::New(String::New("loadBackgroundMusic"));
	STRING_CACHE_GLOBAL = Persistent<String>::New(String::New("GLOBAL"));
	STRING_CACHE_height = Persistent<String>::New(String::New("height"));
	STRING_CACHE_getWidth = Persistent<String>::New(String::New("getWidth"));
	STRING_CACHE_visible = Persistent<String>::New(String::New("visible"));
	STRING_CACHE_touchTexture = Persistent<String>::New(String::New("touchTexture"));
	STRING_CACHE_measureText = Persistent<String>::New(String::New("measureText"));
	STRING_CACHE_enableScissor = Persistent<String>::New(String::New("enableScissor"));
	STRING_CACHE_navigator = Persistent<String>::New(String::New("navigator"));
	STRING_CACHE_market = Persistent<String>::New(String::New("market"));
	STRING_CACHE_NATIVE = Persistent<String>::New(String::New("NATIVE"));
	STRING_CACHE_log = Persistent<String>::New(String::New("log"));
	STRING_CACHE_confirmPurchase = Persistent<String>::New(String::New("confirmPurchase"));
	STRING_CACHE_width = Persistent<String>::New(String::New("width"));
	STRING_CACHE_create = Persistent<String>::New(String::New("create"));
	STRING_CACHE_clearTimeout = Persistent<String>::New(String::New("clearTimeout"));
	STRING_CACHE_sendActivityToBack = Persistent<String>::New(String::New("sendActivityToBack"));
	STRING_CACHE_fillText = Persistent<String>::New(String::New("fillText"));
	STRING_CACHE_PROFILER = Persistent<String>::New(String::New("PROFILER"));
	STRING_CACHE_runGC = Persistent<String>::New(String::New("runGC"));
	STRING_CACHE_start = Persistent<String>::New(String::New("start"));
	STRING_CACHE_camera = Persistent<String>::New(String::New("camera"));
	STRING_CACHE_localStorage = Persistent<String>::New(String::New("localStorage"));
	STRING_CACHE_onRead = Persistent<String>::New(String::New("onRead"));
	STRING_CACHE_getNextId = Persistent<String>::New(String::New("getNextId"));
	STRING_CACHE_onAnimationFinish = Persistent<String>::New(String::New("onAnimationFinish"));
	STRING_CACHE_type = Persistent<String>::New(String::New("type"));
	STRING_CACHE_milliseconds = Persistent<String>::New(String::New("milliseconds"));
	STRING_CACHE_setVolume = Persistent<String>::New(String::New("setVolume"));
	STRING_CACHE_nativeHash = Persistent<String>::New(String::New("nativeHash"));
	STRING_CACHE_measureTextBitmap = Persistent<String>::New(String::New("measureTextBitmap"));
	STRING_CACHE_globalID = Persistent<String>::New(String::New("globalID"));
	STRING_CACHE_setInterval = Persistent<String>::New(String::New("setInterval"));
	STRING_CACHE_getType = Persistent<String>::New(String::New("getType"));
	STRING_CACHE_applyUpdate = Persistent<String>::New(String::New("applyUpdate"));
	STRING_CACHE___gl_name = Persistent<String>::New(String::New("__gl_name"));
	STRING_CACHE_inputPrompt = Persistent<String>::New(String::New("inputPrompt"));
	STRING_CACHE_language = Persistent<String>::New(String::New("language"));
	STRING_CACHE_androidHash = Persistent<String>::New(String::New("androidHash"));
	STRING_CACHE_playSound = Persistent<String>::New(String::New("playSound"));
	STRING_CACHE_x1 = Persistent<String>::New(String::New("x1"));
	STRING_CACHE_usedHeap = Persistent<String>::New(String::New("usedHeap"));
	STRING_CACHE_viewport = Persistent<String>::New(String::New("viewport"));
	STRING_CACHE_sound = Persistent<String>::New(String::New("sound"));
	STRING_CACHE_none = Persistent<String>::New(String::New("none"));
	STRING_CACHE_b = Persistent<String>::New(String::New("b"));
	STRING_CACHE__fillText = Persistent<String>::New(String::New("_fillText"));
	STRING_CACHE_addFilter = Persistent<String>::New(String::New("addFilter"));
	STRING_CACHE_enabled = Persistent<String>::New(String::New("enabled"));
	STRING_CACHE_deviceUUID = Persistent<String>::New(String::New("deviceUUID"));
	STRING_CACHE_profiler = Persistent<String>::New(String::New("profiler"));
	STRING_CACHE_xhr = Persistent<String>::New(String::New("xhr"));
	STRING_CACHE_r = Persistent<String>::New(String::New("r"));
	STRING_CACHE_strokeRect = Persistent<String>::New(String::New("strokeRect"));
	STRING_CACHE_dispatchEvent = Persistent<String>::New(String::New("dispatchEvent"));
	STRING_CACHE_setVisible = Persistent<String>::New(String::New("setVisible"));
	STRING_CACHE_setDimensions = Persistent<String>::New(String::New("setDimensions"));
	STRING_CACHE_HAS_NATIVE_IMPL = Persistent<String>::New(String::New("HAS_NATIVE_IMPL"));
	STRING_CACHE_onerror = Persistent<String>::New(String::New("onerror"));
	STRING_CACHE_tcpHost = Persistent<String>::New(String::New("tcpHost"));
	STRING_CACHE_getX = Persistent<String>::New(String::New("getX"));
	STRING_CACHE_getY = Persistent<String>::New(String::New("getY"));
	STRING_CACHE_buy = Persistent<String>::New(String::New("buy"));
	STRING_CACHE_uploadDeviceInfo = Persistent<String>::New(String::New("uploadDeviceInfo"));
	STRING_CACHE_native_info = Persistent<String>::New(String::New("native_info"));
	STRING_CACHE_tick = Persistent<String>::New(String::New("tick"));
	STRING_CACHE_versionCode = Persistent<String>::New(String::New("versionCode"));
	STRING_CACHE_baseline = Persistent<String>::New(String::New("baseline"));
	STRING_CACHE_translate = Persistent<String>::New(String::New("translate"));
	STRING_CACHE_getHeight = Persistent<String>::New(String::New("getHeight"));
	STRING_CACHE_setOpacity = Persistent<String>::New(String::New("setOpacity"));
	STRING_CACHE_strokeText = Persistent<String>::New(String::New("strokeText"));
	STRING_CACHE_disableScissor = Persistent<String>::New(String::New("disableScissor"));
	STRING_CACHE_build = Persistent<String>::New(String::New("build"));
	STRING_CACHE_destroy = Persistent<String>::New(String::New("destroy"));
	STRING_CACHE_events = Persistent<String>::New(String::New("events"));
	STRING_CACHE_deleteTexture = Persistent<String>::New(String::New("deleteTexture"));
	STRING_CACHE_clearFilters = Persistent<String>::New(String::New("clearFilters"));
	STRING_CACHE_setItem = Persistent<String>::New(String::New("setItem"));
	STRING_CACHE_needsReflow = Persistent<String>::New(String::New("needsReflow"));
	STRING_CACHE_getItem = Persistent<String>::New(String::New("getItem"));
	STRING_CACHE_device = Persistent<String>::New(String::New("device"));
	STRING_CACHE_dialogs = Persistent<String>::New(String::New("dialogs"));
	STRING_CACHE_horizontal = Persistent<String>::New(String::New("horizontal"));
	STRING_CACHE___view = Persistent<String>::New(String::New("__view"));
	STRING_CACHE_gallery = Persistent<String>::New(String::New("gallery"));
	STRING_CACHE_repeat = Persistent<String>::New(String::New("repeat"));
	STRING_CACHE_a = Persistent<String>::New(String::New("a"));
	STRING_CACHE_purchase = Persistent<String>::New(String::New("purchase"));
	STRING_CACHE_tracking = Persistent<String>::New(String::New("tracking"));
	STRING_CACHE_outline = Persistent<String>::New(String::New("outline"));
	STRING_CACHE___log = Persistent<String>::New(String::New("__log"));
	STRING_CACHE_i = Persistent<String>::New(String::New("i"));
	STRING_CACHE_getGlobalAlpha = Persistent<String>::New(String::New("getGlobalAlpha"));
	STRING_CACHE_clear = Persistent<String>::New(String::New("clear"));
	STRING_CACHE_overlay = Persistent<String>::New(String::New("overlay"));
	STRING_CACHE_uri = Persistent<String>::New(String::New("uri"));
	STRING_CACHE_installReferrer = Persistent<String>::New(String::New("installReferrer"));
	STRING_CACHE_y = Persistent<String>::New(String::New("y"));
	STRING_CACHE_doneLoading = Persistent<String>::New(String::New("doneLoading"));
	STRING_CACHE_failed = Persistent<String>::New(String::New("failed"));
	STRING_CACHE_devicePixelRatio = Persistent<String>::New(String::New("devicePixelRatio"));
}
