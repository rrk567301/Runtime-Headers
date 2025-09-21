@class NSString, NSData, NSMutableArray, NSNumber;

@interface FTIDSMessage : IDSBaseMessage <NSCopying> {
    NSNumber *_serverTimestamp;
    NSNumber *_serverTimestampReceivedDate;
}

@property (nonatomic) struct __SecKey { } *pushPrivateKey;
@property (nonatomic) struct __SecKey { } *pushPublicKey;
@property (copy, nonatomic) NSData *pushCertificate;
@property (copy, nonatomic) NSData *pushToken;
@property (nonatomic) char wantsPushSignatures;
@property (copy, nonatomic) NSString *selfURI;
@property (copy, nonatomic) NSMutableArray *certDataArray;
@property (copy, nonatomic) NSMutableArray *publicKeyArray;
@property (copy, nonatomic) NSMutableArray *privateKeyArray;
@property (copy, nonatomic) NSMutableArray *userIDArray;
@property (nonatomic) struct __SecKey { } *identityPrivateKey;
@property (nonatomic) struct __SecKey { } *identityPublicKey;
@property (copy, nonatomic) NSData *IDCertificate;
@property (readonly) char wantsIDSProtocolVersion;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)command;
- (id)serverTimestamp;
- (long long)responseCommand;
- (char)wantsBAASigning;
- (void)setServerTimestampReceivedDate:(id)a0;
- (char)wantsBinaryPush;
- (id)additionalMessageHeaders;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)retryCountKey;
- (id)serverTimestampReceivedDate;
- (void)setServerTimestamp:(id)a0;
- (char)wantsBagKey;
- (char)wantsBodySignature;
- (char)wantsCompressedBody;
- (char)wantsHTTPHeaders;
- (char)wantsIDSServer;
- (char)wantsSignature;
- (void)addAuthUserID:(id)a0 certificate:(id)a1 privateKey:(struct __SecKey { } *)a2 publicKey:(struct __SecKey { } *)a3;

@end
