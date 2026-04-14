@class PKFamilyMember, PKAccountUser;

@interface PKSharingIDSManagerHandlerDetails : NSObject

@property (readonly, nonatomic) PKFamilyMember *familyMember;
@property (readonly, nonatomic) PKAccountUser *accountUser;

- (id)description;
- (void).cxx_destruct;
- (id)primaryAppleID;
- (id)aliases;
- (id)initWithFamilyMember:(id)a0;
- (id)initWithFamilyMember:(id)a0 accountUser:(id)a1;
- (id)allHandles;

@end
