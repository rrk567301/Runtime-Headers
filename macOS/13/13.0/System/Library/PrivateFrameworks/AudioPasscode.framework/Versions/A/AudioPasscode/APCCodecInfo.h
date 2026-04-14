@interface APCCodecInfo : NSObject

+ (id)supportedDecoders;
+ (id)supportedEncoders;
+ (id)supportedConfigurationClasses;
+ (Class)configurationClassForName:(id)a0;
+ (BOOL)isSupportedCodecCapability:(id)a0;
+ (BOOL)isSupportedCodecConfiguration:(id)a0;

@end
