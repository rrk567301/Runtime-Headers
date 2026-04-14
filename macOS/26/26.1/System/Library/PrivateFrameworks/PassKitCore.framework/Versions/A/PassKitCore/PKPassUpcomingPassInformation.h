@class NSArray;

@interface PKPassUpcomingPassInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *allEntries;
@property (readonly, copy, nonatomic) NSArray *groups;

+ (id)_supportedEntryTypesForPassStyle:(long long)a0;
+ (id)createFromDictionary:(id)a0 bundle:(id)a1 forPassStyle:(long long)a2;
+ (BOOL)isPassStyleEligible:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)coalesceIntoGroupsForPassStyle:(long long)a0;
- (id)_groupIdentifierForEntry:(id)a0;
- (id)_groupNameForIdentifier:(id)a0;
- (id)_initWithEntries:(id)a0;

@end
