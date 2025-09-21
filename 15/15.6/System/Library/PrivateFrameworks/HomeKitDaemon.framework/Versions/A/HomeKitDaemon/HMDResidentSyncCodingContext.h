@class HMDDeviceAddress, NSSet;
@protocol HMDHomeMember;

@interface HMDResidentSyncCodingContext : NSObject <HMDManagedObjectFilter> {
    NSSet *_relevantTriggers;
    NSSet *_relevantBulletinRegistrations;
}

@property (readonly, nonatomic) id<HMDHomeMember> targetUser;
@property (readonly, nonatomic) char targetIsResident;
@property (readonly, nonatomic) HMDDeviceAddress *targetDeviceAddress;

- (void).cxx_destruct;
- (char)_shouldExcludeForRestrictedGuestObject:(id)a0 context:(id)a1;
- (id)initWithTargetUser:(id)a0 targetIsResident:(char)a1 targetDeviceAddress:(id)a2;
- (char)shouldExcludeObject:(id)a0 context:(id)a1;

@end
