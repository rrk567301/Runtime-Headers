@class NSUUID, HMMDateProvider, NSDate;

@interface HMDResidentStabilityData : NSObject {
    HMMDateProvider *_dateProvider;
}

@property (readonly, nonatomic) NSUUID *residentIDSIdentifier;
@property (readonly, nonatomic) long long dropoffCount;
@property (readonly, nonatomic) NSDate *firstDropoffTime;
@property (readonly, nonatomic) NSDate *lastDropoffTime;
@property (readonly, nonatomic) NSDate *unstableSince;

- (void).cxx_destruct;
- (id)description;
- (BOOL)didTransitionToUnstable;
- (id)initWithResidentIDSIdentifier:(id)a0 dateProvider:(id)a1;
- (BOOL)isUnstable;
- (void)recordDropoffEvent;
- (void)resetStabilityData;

@end
