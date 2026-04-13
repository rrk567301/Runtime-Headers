@class NSDictionary, NSString, NSObject;
@protocol UVCFrameProcessorProtocol, OS_dispatch_queue;

@interface UVCFrameProcessorBase : NSObject <UVCFrameProcessorProtocol> {
    unsigned long long _bytesPerRowAllignment;
    id _cachedFormatDescriptor;
}

@property (readonly, weak) id<UVCFrameProcessorProtocol> destination;
@property (readonly) NSDictionary *attributes;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)serialize;
- (id)processingStatus;
- (void)handleStreamData:(id)a0 error:(id)a1 args:(id)a2;
- (id)initWithAttributes:(id)a0 destination:(id)a1 queue:(id)a2;
- (void)updateStreamAttributes:(id)a0;
- (id)createPixelBufferPool:(id)a0;
- (unsigned long long)bytesPerRowAllignment;
- (struct opaqueCMSampleBuffer { } *)createRenderReadySampleBuffer:(struct __CVBuffer { } *)a0 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)processStreamData:(id)a0 error:(id)a1 args:(id)a2;
- (id)getImageBufferAttributes:(id)a0;

@end
