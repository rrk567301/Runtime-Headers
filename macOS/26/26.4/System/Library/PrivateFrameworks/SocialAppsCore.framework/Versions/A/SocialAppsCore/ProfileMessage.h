@class NSString, NSData;

@interface ProfileMessage : IDSBaseMessage <NSCopying>

@property (copy, nonatomic) NSString *profileID;
@property (copy, nonatomic) NSString *authToken;
@property (nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *pushPrivateKey;
@property (nonatomic) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *pushPublicKey;
@property (copy, nonatomic) NSData *pushCertificate;
@property (copy, nonatomic) NSData *pushToken;

- (long long)responseCommand;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)wantsBinaryPush;
- (long long)command;
- (void).cxx_destruct;
- (id)additionalMessageHeadersForOutgoingPush;
- (void)handleResponseDictionary:(id)a0;
- (id)init;
- (BOOL)wantsCompressedBody;
- (void)dealloc;
- (id)additionalMessageHeaders;
- (BOOL)hasRequiredKeys:(id *)a0;
- (BOOL)wantsBagKey;
- (BOOL)wantsHTTPHeaders;

@end
