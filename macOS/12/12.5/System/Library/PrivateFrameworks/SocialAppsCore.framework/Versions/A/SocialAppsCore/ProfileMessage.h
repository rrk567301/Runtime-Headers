@class NSString, NSData;

@interface ProfileMessage : IDSBaseMessage <NSCopying>

@property (copy, nonatomic) NSString *profileID;
@property (copy, nonatomic) NSString *authToken;
@property (nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *pushPrivateKey;
@property (nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *pushPublicKey;
@property (copy, nonatomic) NSData *pushCertificate;
@property (copy, nonatomic) NSData *pushToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)command;
- (long long)responseCommand;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsBagKey;
- (BOOL)hasRequiredKeys:(id *)a0;
- (id)additionalMessageHeaders;
- (id)additionalMessageHeadersForOutgoingPush;
- (void)handleResponseDictionary:(id)a0;

@end
