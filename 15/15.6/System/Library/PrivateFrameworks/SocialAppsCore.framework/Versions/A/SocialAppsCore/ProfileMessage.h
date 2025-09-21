@class NSString, NSData;

@interface ProfileMessage : IDSBaseMessage <NSCopying>

@property (copy, nonatomic) NSString *profileID;
@property (copy, nonatomic) NSString *authToken;
@property (nonatomic) struct __SecKey { } *pushPrivateKey;
@property (nonatomic) struct __SecKey { } *pushPublicKey;
@property (copy, nonatomic) NSData *pushCertificate;
@property (copy, nonatomic) NSData *pushToken;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)command;
- (long long)responseCommand;
- (char)wantsBinaryPush;
- (id)additionalMessageHeaders;
- (id)additionalMessageHeadersForOutgoingPush;
- (void)handleResponseDictionary:(id)a0;
- (char)hasRequiredKeys:(id *)a0;
- (char)wantsBagKey;
- (char)wantsCompressedBody;
- (char)wantsHTTPHeaders;

@end
