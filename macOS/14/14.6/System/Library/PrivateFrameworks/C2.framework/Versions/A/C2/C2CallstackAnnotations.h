@interface C2CallstackAnnotations : NSObject

+ (id /* block */)annotateBlockForContainerType:(long long)a0 block:(id /* block */)a1;
+ (void)annotateCallstackForContainerType:(long long)a0 block:(id /* block */)a1;
+ (void)callbackFor_Backup:(id /* block */)a0;
+ (void)callbackFor_CloudDocs:(id /* block */)a0;
+ (void)callbackFor_CloudPhotos:(id /* block */)a0;
+ (void)callbackFor_GenericApple:(id /* block */)a0;
+ (void)callbackFor_Health:(id /* block */)a0;
+ (void)callbackFor_HomeKit:(id /* block */)a0;
+ (void)callbackFor_KeyValueService:(id /* block */)a0;
+ (void)callbackFor_KeychainSync:(id /* block */)a0;
+ (void)callbackFor_MailDrop:(id /* block */)a0;
+ (void)callbackFor_Messages:(id /* block */)a0;
+ (void)callbackFor_None:(id /* block */)a0;
+ (void)callbackFor_ThirdParty:(id /* block */)a0;

@end
