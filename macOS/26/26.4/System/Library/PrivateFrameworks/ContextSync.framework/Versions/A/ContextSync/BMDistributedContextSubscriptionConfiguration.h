@class NSNumber, NSDate;

@interface BMDistributedContextSubscriptionConfiguration : NSObject

@property (retain, nonatomic) NSNumber *oneOffSubscription;
@property (retain, nonatomic) NSNumber *wakeState;
@property (retain, nonatomic) NSDate *lastChangedDate;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithOptions:(unsigned long long)a0 lastChangedDate:(id)a1;

@end
