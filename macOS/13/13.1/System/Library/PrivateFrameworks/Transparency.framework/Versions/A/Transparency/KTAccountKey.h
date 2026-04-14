@class NSString, NSData, KTAccountPublicID, TransparencyApplication;

@interface KTAccountKey : NSObject

@property (retain) TransparencyApplication *application;
@property (retain) NSData *_accountPublicKeyInfo;
@property (readonly) NSString *applicationIdentifier;
@property (readonly) NSData *accountPublicKey;
@property (readonly) NSData *accountPublicKeyInfo;
@property (readonly) KTAccountPublicID *accountPublicID;

+ (id)accountPublicKey:(id)a0;
+ (id)accountPublicID:(id)a0;

- (void).cxx_destruct;
- (id)initWithApplication:(id)a0;
- (void)signData:(id)a0 completionBlock:(id /* block */)a1;
- (void)rollKey:(id /* block */)a0;

@end
