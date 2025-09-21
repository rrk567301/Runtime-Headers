@interface KVAssistantServicesBridge : NSObject

+ (char)isASRSupported;
+ (char)isSiriUODSupported;
+ (id)iCloudAltDSIDFromSharedUserId:(id)a0 error:(id *)a1;
+ (char)isSiriMUXSupported;

@end
