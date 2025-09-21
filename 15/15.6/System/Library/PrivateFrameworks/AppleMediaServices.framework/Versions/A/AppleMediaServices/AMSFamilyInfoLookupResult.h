@class NSDictionary, NSArray, NSNumber;

@interface AMSFamilyInfoLookupResult : NSObject

@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, getter=isCached) char cached;
@property (readonly) NSArray *familyMembers;
@property (readonly) NSNumber *headOfHouseholdICloudDSID;
@property (readonly, getter=isHeadOfHouseholdSharingPayment) char headOfHouseholdSharingPayment;

+ (id)_familyMembersFromDictionaryRepresentation:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0 cached:(char)a1;

@end
