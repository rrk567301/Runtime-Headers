@class VNImageprint;

@interface VCPImageDescriptor : NSObject <VCPDistanceDescriptorProtocol> {
    VNImageprint *_imagePrint;
}

+ (int)preferredPixelFormat;
+ (BOOL)usePHAssetData;
+ (id)descriptorWithImage:(struct __CVBuffer { } *)a0;
+ (id)descriptorWithData:(id)a0;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithImage:(struct __CVBuffer { } *)a0;
- (id)serialize;
- (int)computeDistance:(float *)a0 toDescriptor:(id)a1;

@end
