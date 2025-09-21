@class NSString, NSNumber, NSDate;

@interface LBFObservedTrialStatus : NSObject

@property (readonly, nonatomic) NSString *experimentOrTaskId;
@property (readonly, nonatomic) NSString *deploymentId;
@property (retain, nonatomic) NSDate *lastObservedTimestamp;
@property (retain, nonatomic) NSNumber *isAllocated;
@property (retain, nonatomic) NSNumber *isActivated;
@property (nonatomic) char isAllocated_implicit;
@property (nonatomic) char isActivated_implicit;

- (void).cxx_destruct;
- (id)initWithObservedStatus:(id)a0 deploymentId:(id)a1;
- (id)initWithObservedStatus:(id)a0 deploymentId:(id)a1 isAllocated:(id)a2 isActivated:(id)a3 isAllocated_implicit:(char)a4 isActivated_implicit:(char)a5;

@end
