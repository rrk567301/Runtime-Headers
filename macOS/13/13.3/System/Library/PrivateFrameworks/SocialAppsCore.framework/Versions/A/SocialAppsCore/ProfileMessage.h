@class NSString, NSData;

@interface ProfileMessage : IDSBaseMessage <NSCopying>

@property (copy, nonatomic) NSString *profileID;
@property (copy, nonatomic) NSString *authToken;
@property (nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *pushPrivateKey;
@property (nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *pushPublicKey;
@property (copy, nonatomic) NSData *pushCertificate;
@property (copy, nonatomic) NSData *pushToken;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)command;
- (long long)responseCommand;
- (BOOL)wantsBinaryPush;
- (id)additionalMessageHeaders;
- (id)additionalMessageHeadersForOutgoingPush;
- (void)handleResponseDictionary:(id)a0;
- (BOOL)hasRequiredKeys:(id *)a0;
- (BOOL)wantsBagKey;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsHTTPHeaders;

@end
