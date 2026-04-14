@class _TtC14FamilyCircleUI17LocationViewModel;

@interface FamilyCircleUI.LocationViewModel : NSObject {
    void /* unknown type, empty encoding */ familyCircle;
    void /* unknown type, empty encoding */ _familyMembersSharingLocationWithMe;
    void /* unknown type, empty encoding */ _sharingLocationWithFamilyMembers;
    void /* unknown type, empty encoding */ _childCanModifyLocationSharingMap;
    void /* unknown type, empty encoding */ _membersAutomaticallySharing;
    void /* unknown type, empty encoding */ fmfSession;
    void /* unknown type, empty encoding */ locationListener;
}

@property (class, nonatomic, retain) _TtC14FamilyCircleUI17LocationViewModel *sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFamilyCircle:(id)a0;
- (void)updateMemberDSIDs:(id)a0;

@end
