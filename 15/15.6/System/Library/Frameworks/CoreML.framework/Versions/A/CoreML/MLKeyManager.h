@interface MLKeyManager : NSObject

+ (id)decryptSessionForModelAtURL:(id)a0 error:(id *)a1;
+ (char)isModelEncrypted:(id)a0;

@end
