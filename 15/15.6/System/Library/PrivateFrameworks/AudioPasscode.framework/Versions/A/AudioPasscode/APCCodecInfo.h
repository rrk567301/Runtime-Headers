@interface APCCodecInfo : NSObject

+ (Class)configurationClassForName:(id)a0;
+ (char)isSupportedCodecCapability:(id)a0;
+ (char)isSupportedCodecConfiguration:(id)a0;
+ (id)supportedConfigurationClasses;
+ (id)supportedDecoders;
+ (id)supportedEncoders;

@end
