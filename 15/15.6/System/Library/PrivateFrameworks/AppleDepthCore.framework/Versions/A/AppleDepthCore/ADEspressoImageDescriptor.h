@class NSString, ADImageDescriptor;

@interface ADEspressoImageDescriptor : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) ADImageDescriptor *imageDescriptor;
@property (readonly, nonatomic) char isInput;

+ (id)descriptorWithName:(id)a0 imageDescriptor:(id)a1 isInput:(char)a2;
+ (id)inputDescriptorWithName:(id)a0 pixelFormat:(unsigned int)a1;
+ (id)outputDescriptorWithName:(id)a0 pixelFormat:(unsigned int)a1;

- (void).cxx_destruct;
- (char)conformedByPixelBuffer:(struct __CVBuffer { } *)a0 forLayout:(unsigned long long)a1;

@end
