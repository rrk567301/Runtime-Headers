@class NSString;

@interface CMIInferenceResourceDescriptor : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) unsigned long long layout;
@property (nonatomic) unsigned long long pixelFormat;

+ (id)bufferDescriptorWithName:(id)a0 direction:(unsigned long long)a1 layout:(unsigned long long)a2;
+ (id)inputNCHWR16FloatTextureDescriptorWithName:(id)a0;
+ (id)outputNCHWR16FloatTextureDescriptorWithName:(id)a0;
+ (id)textureDescriptorWithName:(id)a0 direction:(unsigned long long)a1 layout:(unsigned long long)a2 pixelFormat:(unsigned long long)a3;

- (void).cxx_destruct;

@end
