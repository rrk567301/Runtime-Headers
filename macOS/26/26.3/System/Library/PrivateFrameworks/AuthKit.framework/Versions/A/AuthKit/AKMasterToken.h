@class NSData, NSString, NSMutableDictionary;

@interface AKMasterToken : AKToken {
    NSMutableDictionary *_properties;
}

@property (readonly, nonatomic) NSData *sessionKey;
@property (readonly, nonatomic) NSData *encryptedSessionKey;
@property (readonly, nonatomic) NSData *externalizedVersion;
@property (readonly, nonatomic) NSString *externalizedVersionString;

+ (id)tokenWithExternalizedVersionString:(id)a0;
+ (id)tokenWithExternalizedVersion:(id)a0 lifetime:(id)a1;

- (void)setStringValue:(id)a0;
- (id)init;
- (id)initWithAppleID:(id)a0 altDSID:(id)a1;
- (void).cxx_destruct;
- (BOOL)updateWithHTTPURLResponse:(id)a0;
- (void)_setEncryptedSessionKey:(id)a0;
- (id)stringValue;
- (void)_setSessionKey:(id)a0;

@end
