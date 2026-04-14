@class NSSet, NSString;
@protocol MLFeatureProvider;

@interface VNPixelBufferMLFeatureProvider : NSObject <MLFeatureProvider> {
    struct __CVBuffer { } *_pixelBuffer;
    NSString *_imageInputKey;
    id<MLFeatureProvider> _originalFeatureProvider;
}

@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (void)dealloc;
- (id)featureValueForName:(id)a0;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 forKey:(id)a1 originalFeatureProvider:(id)a2;

@end
