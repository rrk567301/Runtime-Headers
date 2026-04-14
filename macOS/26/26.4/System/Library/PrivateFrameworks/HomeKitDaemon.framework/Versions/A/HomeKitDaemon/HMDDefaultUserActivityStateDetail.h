@class HMDUser, HMDDevice;
@protocol HMDUserPresence;

@interface HMDDefaultUserActivityStateDetail : NSObject <HMDUserActivityStateDetail, HMDUserPresence>

@property (nonatomic, readonly) id<HMDUserPresence> userPresence;
@property (nonatomic, readonly) HMDUser *user;
@property (nonatomic, readonly) BOOL atHome;
@property (nonatomic, readonly) BOOL notAtHome;
@property (nonatomic, readonly) HMDDevice *deviceWhichUpdatedUserPresence;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUserPresence:(id)a0;
- (BOOL)isAtHome;
- (BOOL)isNotAtHome;

@end
