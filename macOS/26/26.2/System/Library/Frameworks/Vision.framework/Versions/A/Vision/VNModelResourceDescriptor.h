@class NSURL;

@interface VNModelResourceDescriptor : VNResourceDescriptor

@property (readonly) NSURL *modelURL;

+ (id)descriptorForModelURL:(id)a0;
+ (id)descriptorForVisionCoreInferenceNetworkDescriptor:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
