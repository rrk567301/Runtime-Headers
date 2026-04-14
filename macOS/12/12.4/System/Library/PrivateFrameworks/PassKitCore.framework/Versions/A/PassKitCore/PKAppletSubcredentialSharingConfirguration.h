@class NSArray;

@interface PKAppletSubcredentialSharingConfirguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long maxNumberOfSharedCredentials;
@property (nonatomic) unsigned long long numberOfShareableCredentials;
@property (copy, nonatomic) NSArray *supportedEntitlements;
@property (nonatomic) BOOL sharingRequiresPassword;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)asDictionary;
- (id)supportedEntitlementWithValue:(unsigned long long)a0;

@end
