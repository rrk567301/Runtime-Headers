@class NSData, NSString;
@protocol MCMEntitlements;

@interface MCMClientCodeSignInfo : NSObject <MCMClientCodeSignInfo>

@property (readonly, nonatomic) NSData *cdhash;
@property (readonly, nonatomic) id<MCMEntitlements> entitlements;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char cached;
@property (readonly, nonatomic) char isSigned;
@property (readonly, nonatomic) char isSignatureValid;
@property (readonly, nonatomic) char isPlatformBinary;
@property (readonly, nonatomic) NSString *teamIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)clientCodeSignInfoByChangingCached:(char)a0;
- (id)initWithCDHash:(id)a0 entitlements:(id)a1 identifier:(id)a2 teamIdentifier:(id)a3 status:(unsigned long long)a4;
- (char)isEqualToClientCodeSignInfo:(id)a0;

@end
