@interface LPMIMETypeRegistry : NSObject

+ (id)MIMETypeForUTI:(id)a0;
+ (id)UTIForMIMEType:(id)a0;
+ (id)UTIForFileExtension:(id)a0;
+ (id)fileExtensionForMIMEType:(id)a0;
+ (id)fileExtensionForUTI:(id)a0;
+ (char)isARAssetType:(id)a0;
+ (char)isAudioType:(id)a0;
+ (char)isHLSType:(id)a0;
+ (char)isImageType:(id)a0;
+ (char)isJSONType:(id)a0;
+ (char)isLosslessImageType:(id)a0;
+ (char)isMediaType:(id)a0;
+ (char)isNonAnimatedMultiframeImageType:(id)a0;
+ (char)isVideoType:(id)a0;
+ (char)isWebPageType:(id)a0;

@end
