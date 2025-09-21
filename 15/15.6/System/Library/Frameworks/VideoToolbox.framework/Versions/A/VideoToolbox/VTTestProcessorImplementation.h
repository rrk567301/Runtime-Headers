@class NSString;

@interface VTTestProcessorImplementation : NSObject <VTFrameProcessorImplementationPrivate> {
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
    long long _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (char)finishProcessing;
- (char)processWithParams:(id)a0 error:(id *)a1;
- (char)startSessionWithConfiguration:(id)a0 error:(id *)a1;

@end
