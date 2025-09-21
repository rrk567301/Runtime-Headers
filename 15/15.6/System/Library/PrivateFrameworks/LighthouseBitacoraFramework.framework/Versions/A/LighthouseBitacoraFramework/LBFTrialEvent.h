@class NSNumber;

@interface LBFTrialEvent : NSObject

@property (readonly, nonatomic) NSNumber *succeeded;
@property (readonly, nonatomic) long long eventType;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithActivation:(char)a0;
- (id)initWithAllocation:(char)a0;
- (id)initWithDeactivation:(char)a0;

@end
