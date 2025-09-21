@class NSDictionary, NSString, CMIStyleEngineConfiguration;

@interface _NUStyleEngineConfiguration : NSObject

@property (readonly, nonatomic) CMIStyleEngineConfiguration *styleEngineConfiguration;
@property (readonly, nonatomic) NSDictionary *configurationDictionary;
@property (copy, nonatomic) NSString *usage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } coefficientTextureSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } thumbnailSize;
@property (readonly, nonatomic) unsigned long long coefficientBufferSize;

+ (struct CGSize { double x0; double x1; })coefficientTextureSizeForConfigurationDictionary:(id)a0;
+ (struct CGSize { double x0; double x1; })coefficientTextureSizeForStyleEngineConfiguration:(id)a0;

- (id)init;
- (BOOL)matchesConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfigurationDictionary:(id)a0;
- (struct { long long x0; long long x1; })coefficientPixelBufferSize;
- (id)initWithStyleEngineConfiguration:(id)a0;
- (BOOL)usesFloat16;

@end
