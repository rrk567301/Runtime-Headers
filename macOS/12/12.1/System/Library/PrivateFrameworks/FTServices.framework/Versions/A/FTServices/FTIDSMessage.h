@class NSString, NSData, NSMutableArray, NSNumber;

@interface FTIDSMessage : IDSBaseMessage <NSCopying> {
    NSNumber *_serverTimestamp;
    NSNumber *_serverTimestampReceivedDate;
}

@property (nonatomic) struct __SecKey { } *pushPrivateKey;
@property (nonatomic) struct __SecKey { } *pushPublicKey;
@property (copy, nonatomic) NSData *pushCertificate;
@property (copy, nonatomic) NSData *pushToken;
@property (copy, nonatomic) NSString *selfURI;
@property (copy, nonatomic) NSMutableArray *certDataArray;
@property (copy, nonatomic) NSMutableArray *publicKeyArray;
@property (copy, nonatomic) NSMutableArray *privateKeyArray;
@property (copy, nonatomic) NSMutableArray *userIDArray;
@property (nonatomic) struct __SecKey { } *identityPrivateKey;
@property (nonatomic) struct __SecKey { } *identityPublicKey;
@property (copy, nonatomic) NSData *IDCertificate;
@property (readonly) BOOL wantsIDSProtocolVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)command;
- (id)serverTimestamp;
- (long long)responseCommand;
- (BOOL)wantsHTTPHeaders;
- (void)setServerTimestamp:(id)a0;
- (BOOL)wantsBinaryPush;
- (id)retryCountKey;
- (BOOL)wantsIDSServer;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsBagKey;
- (BOOL)wantsSignature;
- (BOOL)wantsBodySignature;
- (id)serverTimestampReceivedDate;
- (void)setServerTimestampReceivedDate:(id)a0;
- (id)additionalMessageHeaders;
- (id)additionalMessageHeadersForOutgoingPush;
- (void)addAuthUserID:(id)a0 certificate:(id)a1 privateKey:(struct __SecKey { } *)a2 publicKey:(struct __SecKey { } *)a3;

@end
