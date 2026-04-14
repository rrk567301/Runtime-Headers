@class NSString;

@interface PKAddSecureElementPassConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long configurationType;
@property (readonly, nonatomic) unsigned long long allowManagedAppleID;
@property (copy, nonatomic) NSString *issuerIdentifier;
@property (copy, nonatomic) NSString *localizedDescription;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (BOOL)hasRequiredDataForProvisioning;
- (void)updateAllowManagedAppleIDWithConfiguration:(id)a0;
- (void)updateAllowManagedAppleIDWithEntitlements:(id)a0;

@end
