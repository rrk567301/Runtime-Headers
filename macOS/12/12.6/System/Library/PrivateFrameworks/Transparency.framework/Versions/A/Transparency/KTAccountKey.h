@class NSData, NSString, TransparencyApplication;

@interface KTAccountKey : NSObject

@property (retain) TransparencyApplication *application;
@property (retain) NSData *_accountPublicKeyInfo;
@property (readonly) NSString *applicationIdentifier;
@property (readonly) NSData *accountPublicKey;
@property (readonly) NSData *accountPublicKeyInfo;

- (void).cxx_destruct;
- (id)initWithApplication:(id)a0;
- (void)signData:(id)a0 completionBlock:(id /* block */)a1;
- (void)rollKey:(id /* block */)a0;

@end
