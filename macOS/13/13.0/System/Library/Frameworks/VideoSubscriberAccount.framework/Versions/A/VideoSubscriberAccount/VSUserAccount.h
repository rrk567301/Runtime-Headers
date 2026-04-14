@class NSString, NSArray, NSURL, NSDate;

@interface VSUserAccount : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long sourceType;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (nonatomic, getter=isFromCurrentDevice) BOOL fromCurrentDevice;
@property (nonatomic) long long deviceCategory;
@property (nonatomic) unsigned long long keychainItemHash;
@property (copy, nonatomic) NSURL *updateURL;
@property (nonatomic) BOOL requiresSystemTrust;
@property (retain, nonatomic) NSString *accountProviderIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long accountType;
@property (nonatomic, getter=isDeleted) BOOL deleted;
@property (copy, nonatomic) NSDate *subscriptionBillingCycleEndDate;
@property (copy, nonatomic) NSArray *tierIdentifiers;
@property (copy, nonatomic) NSString *billingIdentifier;
@property (copy, nonatomic) NSString *authenticationData;

+ (id)new;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccountType:(long long)a0 updateURL:(id)a1;
- (id)initWithAccountType:(long long)a0 updateURL:(id)a1 sourceType:(long long)a2 sourceIdentifier:(id)a3;
- (id)sourceTypeForFiltering;

@end
