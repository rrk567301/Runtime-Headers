@class NSString, NSURL;

@interface MCMResultAcquireSandboxExtensionWithUUID : MCMResultBase

@property (readonly, nonatomic) NSString *sandboxToken;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *personaUniqueString;

- (BOOL)encodeResultOntoReply:(id)a0;
- (void).cxx_destruct;
- (id)initWithSandboxToken:(id)a0 personaUniqueString:(id)a1 url:(id)a2;

@end
