@interface WBSNSHTTPCookieTranscoder : NSObject

+ (id)deserializeCookiesData:(id)a0 usingEncryptionProvider:(id)a1 error:(id *)a2;
+ (id)serializeCookies:(id)a0 usingEncryptionProvider:(id)a1 error:(id *)a2;

- (id)init;

@end
