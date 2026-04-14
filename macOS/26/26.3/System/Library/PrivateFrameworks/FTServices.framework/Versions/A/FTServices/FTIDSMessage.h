@class NSString, NSData, NSMutableArray, NSNumber;

@interface FTIDSMessage : IDSBaseMessage <NSCopying> {
    NSNumber *_serverTimestamp;
    NSNumber *_serverTimestampReceivedDate;
}

@property (nonatomic) struct __SecKey { } *pushPrivateKey;
@property (nonatomic) struct __SecKey { } *pushPublicKey;
@property (copy, nonatomic) NSData *pushCertificate;
@property (copy, nonatomic) NSData *pushToken;
@property (nonatomic) BOOL wantsPushSignatures;
@property (copy, nonatomic) NSString *selfURI;
@property (copy, nonatomic) NSMutableArray *certDataArray;
@property (copy, nonatomic) NSMutableArray *publicKeyArray;
@property (copy, nonatomic) NSMutableArray *privateKeyArray;
@property (copy, nonatomic) NSMutableArray *userIDArray;
@property (nonatomic) struct __SecKey { } *identityPrivateKey;
@property (nonatomic) struct __SecKey { } *identityPublicKey;
@property (copy, nonatomic) NSData *IDCertificate;
@property (readonly) BOOL wantsIDSProtocolVersion;

- (long long)responseCommand;
- (id)init;
- (BOOL)wantsBAASigning;
- (void).cxx_destruct;
- (BOOL)wantsBinaryPush;
- (id)additionalMessageHeadersForOutgoingPush;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)wantsCompressedBody;
- (long long)command;
- (id)serverTimestamp;
- (void)setServerTimestampReceivedDate:(id)a0;
- (id)additionalMessageHeaders;
- (id)retryCountKey;
- (id)serverTimestampReceivedDate;
- (void)setServerTimestamp:(id)a0;
- (BOOL)wantsBagKey;
- (BOOL)wantsBodySignature;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsIDSServer;
- (BOOL)wantsSignature;
- (void)addAuthUserID:(id)a0 certificate:(id)a1 privateKey:(struct __SecKey { } *)a2 publicKey:(struct __SecKey { } *)a3;

@end
