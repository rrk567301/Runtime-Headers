@class NSArray, FAFamilyMember;

@interface CNUICoreFamilyElement : NSObject

@property (readonly, nonatomic) FAFamilyMember *familyMember;
@property (readonly, nonatomic) NSArray *matchingContacts;
@property (readonly, nonatomic) char hasMatchingContacts;
@property (readonly, nonatomic) char isParent;

- (id)description;
- (void).cxx_destruct;
- (char)containsFamilyMember:(id)a0;
- (id)initWithFamilyMember:(id)a0 matchingContacts:(id)a1;

@end
