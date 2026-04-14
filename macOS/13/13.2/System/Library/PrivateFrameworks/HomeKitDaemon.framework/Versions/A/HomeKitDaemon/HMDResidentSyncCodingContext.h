@class _MKFUser, NSSet;

@interface HMDResidentSyncCodingContext : NSObject {
    NSSet *_relevantTriggers;
}

@property (readonly, nonatomic) _MKFUser *targetUser;
@property (readonly, nonatomic) BOOL targetIsResident;

- (void).cxx_destruct;
- (id)initWithTargetUser:(id)a0 targetIsResident:(BOOL)a1;

@end
