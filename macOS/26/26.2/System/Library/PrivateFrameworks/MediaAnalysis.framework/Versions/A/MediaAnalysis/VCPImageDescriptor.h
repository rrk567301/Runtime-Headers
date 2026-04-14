@class VNImageprint;

@interface VCPImageDescriptor : NSObject <VCPDistanceDescriptorProtocol> {
    VNImageprint *_imagePrint;
}

+ (int)preferredPixelFormat;
+ (id)descriptorWithData:(id)a0;
+ (id)descriptorWithImage:(struct __CVBuffer { } *)a0;
+ (BOOL)usePHAssetData;

- (id)initWithData:(id)a0;
- (id)serialize;
- (id)initWithImage:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;
- (int)computeDistance:(float *)a0 toDescriptor:(id)a1;

@end
