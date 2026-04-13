@class NSDictionary;

@interface UVCNativeFrame : NSObject {
    unsigned long long _usedDataSize;
    unsigned long long _bytesPerRowAllignment;
    NSDictionary *_pixelBufferAuxAttributes;
    unsigned long long _signPostId;
}

@property (readonly) id pixelBuffer;
@property (readonly) id blockBuffer;
@property (readonly) unsigned long long totalDataSize;
@property (readonly) unsigned long long usedDataSize;
@property (readonly) BOOL isComplete;
@property (retain) NSDictionary *presentationDuration;
@property (retain) NSDictionary *presentationTimestamp;
@property (readonly) unsigned long long captureTime;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)appendData:(id)a0 error:(id *)a1;
- (id)initWithPixelBufferPool:(id)a0 attributes:(id)a1;
- (BOOL)setupBuffers:(id)a0;
- (BOOL)setupPixelBuffer:(id)a0;
- (BOOL)setupBlockBuffer;
- (BOOL)setupBlockBufferSinglePlane;
- (BOOL)setupBlockBufferMultiplePlane:(unsigned long long)a0;
- (BOOL)appendNonAlignedData:(id)a0 error:(id *)a1;

@end
