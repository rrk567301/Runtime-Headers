@class HMDUser, HMDDevice, NSString;

@interface HMDHomeActivityHomeAwayUserStateDetail : HMFObject <HMDUserPresence>

@property (readonly, nonatomic) HMDUser *user;
@property (readonly, nonatomic, getter=isAtHome) BOOL atHome;
@property (readonly, nonatomic, getter=isNotAtHome) BOOL notAtHome;
@property (readonly, nonatomic) HMDDevice *deviceWhichUpdatedUserPresence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithUser:(id)a0 state:(unsigned long long)a1 device:(id)a2;

@end
