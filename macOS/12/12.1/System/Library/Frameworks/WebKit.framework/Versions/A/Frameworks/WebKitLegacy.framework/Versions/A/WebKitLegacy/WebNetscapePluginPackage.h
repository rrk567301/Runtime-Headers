@interface WebNetscapePluginPackage : WebBasePluginPackage {
    struct _NPPluginFuncs { unsigned short size; unsigned short version; void /* function */ *newp; void /* function */ *destroy; void /* function */ *setwindow; void /* function */ *newstream; void /* function */ *destroystream; void /* function */ *asfile; void /* function */ *writeready; void /* function */ *write; void /* function */ *print; void /* function */ *event; void /* function */ *urlnotify; void *javaClass; void /* function */ *getvalue; void /* function */ *setvalue; void /* function */ *gotfocus; void /* function */ *lostfocus; void /* function */ *urlredirectnotify; void /* function */ *clearsitedata; void /* function */ *getsiteswithdata; } pluginFuncs;
    struct _NPNetscapeFuncs { unsigned short size; unsigned short version; void /* function */ *geturl; void /* function */ *posturl; void /* function */ *requestread; void /* function */ *newstream; void /* function */ *write; void /* function */ *destroystream; void /* function */ *status; void /* function */ *uagent; void /* function */ *memalloc; void /* function */ *memfree; void /* function */ *memflush; void /* function */ *reloadplugins; void /* function */ *getJavaEnv; void /* function */ *getJavaPeer; void /* function */ *geturlnotify; void /* function */ *posturlnotify; void /* function */ *getvalue; void /* function */ *setvalue; void /* function */ *invalidaterect; void /* function */ *invalidateregion; void /* function */ *forceredraw; void /* function */ *getstringidentifier; void /* function */ *getstringidentifiers; void /* function */ *getintidentifier; void /* function */ *identifierisstring; void /* function */ *utf8fromidentifier; void /* function */ *intfromidentifier; void /* function */ *createobject; void /* function */ *retainobject; void /* function */ *releaseobject; void /* function */ *invoke; void /* function */ *invokeDefault; void /* function */ *evaluate; void /* function */ *getproperty; void /* function */ *setproperty; void /* function */ *removeproperty; void /* function */ *hasproperty; void /* function */ *hasmethod; void /* function */ *releasevariantvalue; void /* function */ *setexception; void /* function */ *pushpopupsenabledstate; void /* function */ *poppopupsenabledstate; void /* function */ *enumerate; void /* function */ *pluginthreadasynccall; void /* function */ *construct; void /* function */ *getvalueforurl; void /* function */ *setvalueforurl; void /* function */ *getauthenticationinfo; void /* function */ *scheduletimer; void /* function */ *unscheduletimer; void /* function */ *popupcontextmenu; void /* function */ *convertpoint; void /* function */ *handleevent; void /* function */ *unfocusinstance; void /* function */ *urlredirectresponse; } browserFuncs;
    unsigned short pluginSize;
    unsigned short pluginVersion;
    int resourceRef;
    void /* function */ *NP_Shutdown;
    BOOL isLoaded;
    BOOL needsUnload;
    unsigned int instanceCount;
    int pluginHostArchitecture;
}

- (BOOL)load;
- (void)open;
- (void)close;
- (void)unload;
- (id)initWithPath:(id)a0;
- (void)createPropertyListFile;
- (void)wasRemovedFromPluginDatabase:(id)a0;
- (BOOL)supportsSnapshotting;
- (int)pluginHostArchitecture;
- (BOOL)_initWithPath:(id)a0;
- (void)_unloadWithShutdown:(BOOL)a0;
- (int)openResourceFile;
- (BOOL)_tryLoad;
- (void)closeResourceFile:(int)a0;
- (struct _NPPluginFuncs { unsigned short x0; unsigned short x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; } *)pluginFuncs;
- (struct _NPNetscapeFuncs { unsigned short x0; unsigned short x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; void /* function */ *x24; void /* function */ *x25; void /* function */ *x26; void /* function */ *x27; void /* function */ *x28; void /* function */ *x29; void /* function */ *x30; void /* function */ *x31; void /* function */ *x32; void /* function */ *x33; void /* function */ *x34; void /* function */ *x35; void /* function */ *x36; void /* function */ *x37; void /* function */ *x38; void /* function */ *x39; void /* function */ *x40; void /* function */ *x41; void /* function */ *x42; void /* function */ *x43; void /* function */ *x44; void /* function */ *x45; void /* function */ *x46; void /* function */ *x47; void /* function */ *x48; void /* function */ *x49; void /* function */ *x50; void /* function */ *x51; void /* function */ *x52; void /* function */ *x53; void /* function */ *x54; void /* function */ *x55; void /* function */ *x56; } *)browserFuncs;

@end
