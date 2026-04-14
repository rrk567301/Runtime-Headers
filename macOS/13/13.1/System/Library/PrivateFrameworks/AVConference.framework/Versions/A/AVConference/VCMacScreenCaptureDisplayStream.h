@class NSString;

@interface VCMacScreenCaptureDisplayStream : VCObject <VCMacScreenCaptureSource> {
    id _delegate;
    struct CGDisplayStream { } *_displayStream;
    struct _VCMacScreenCaptureSourceContext { void *sinkContext; void /* function */ *sinkCallback; } _frameCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)finalize;
- (int)stop;
- (id)initWithDelegate:(id)a0 screenCaptureSourceContext:(const struct _VCMacScreenCaptureSourceContext { void *x0; void /* function */ *x1; } *)a1;
- (void)callbackWithEventString:(id)a0;
- (int)startWithConfig:(id)a0;

@end
