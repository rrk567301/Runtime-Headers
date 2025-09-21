@class NSDictionary;

@interface CAEAGLLayer : CALayer <EAGLDrawable> {
    struct _CAEAGLNativeWindow { struct _EAGLNativeWindowObject { int x0; unsigned int x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; } x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; struct x_list_struct *x6; unsigned int x7; unsigned long long x8; struct Atomic { struct { int x0; } x0; } x9; struct Atomic { struct { int x0; } x0; } x10; struct SpinLock { struct { int x0; } x0; } x11; struct _CAImageQueue *x12; id x13; double x14; double x15; struct x_list_struct *x16; unsigned int x17; struct CAEAGLBuffer *x18; struct CAEAGLBuffer *x19; unsigned int x20; unsigned int x21; unsigned int x22; struct CAEAGLBuffer *x23; id x24; struct Atomic { struct { int x0; } x0; } x25; unsigned long long x26; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; } *_win;
}

@property (readonly) struct _EAGLNativeWindowObject { int x0; unsigned int x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; } *nativeWindow;
@property (getter=isAsynchronous) char asynchronous;
@property unsigned long long maximumDrawableCount;
@property char lowLatency;
@property double inputTime;
@property double drawableTimeoutSeconds;
@property char presentsWithTransaction;
@property (copy) NSDictionary *drawableProperties;

+ (id)defaultValueForKey:(id)a0;
+ (char)CA_automaticallyNotifiesObservers:(Class)a0;

- (void)dealloc;
- (void)didChangeValueForKey:(id)a0;
- (void)_display;
- (char)isDrawableAvailable;
- (void)layerDidBecomeVisible:(char)a0;
- (void)discardContents;
- (char)_defersDidBecomeVisiblePostCommit;
- (void)_didCommitLayer:(void *)a0;
- (char)isDrawableAvailableInternal;
- (char)shouldArchiveValueForKey:(id)a0;

@end
