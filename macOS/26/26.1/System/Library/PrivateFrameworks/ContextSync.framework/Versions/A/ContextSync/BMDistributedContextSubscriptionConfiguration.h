@class NSNumber, NSDate;

@interface BMDistributedContextSubscriptionConfiguration : NSObject

@property (retain, nonatomic) NSNumber *oneOffSubscription;
@property (retain, nonatomic) NSNumber *wakeState;
@property (retain, nonatomic) NSDate *lastChangedDate;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithOptions:(unsigned long long)a0 lastChangedDate:(id)a1;

@end
