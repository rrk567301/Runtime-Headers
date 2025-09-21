@class NSError, AKAuthorization;
@protocol AKCredential;

@interface AMSPurchaseSIWAAuthorizationResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) AKAuthorization *authorization;
@property (retain) NSError *error;
@property (readonly) id<AKCredential> authorizationCredential;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAuthorization:(id)a0 error:(id)a1;
- (char)isEqualToPurchaseSIWAAuthorizationResult:(id)a0;

@end
