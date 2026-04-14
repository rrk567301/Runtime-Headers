@class NSError, AKAuthorization;
@protocol AKCredential;

@interface AMSPurchaseSIWAAuthorizationResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) AKAuthorization *authorization;
@property (retain) NSError *error;
@property (readonly) id<AKCredential> authorizationCredential;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithAuthorization:(id)a0 error:(id)a1;
- (BOOL)isEqualToPurchaseSIWAAuthorizationResult:(id)a0;

@end
