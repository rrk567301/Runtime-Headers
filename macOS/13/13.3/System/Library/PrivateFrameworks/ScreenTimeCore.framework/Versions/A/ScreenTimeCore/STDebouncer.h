@protocol STDebouncerDelegate;

@interface STDebouncer : NSObject

@property (nonatomic) double minCoalescenceInterval;
@property (nonatomic) double maxCoalescenceInterval;
@property (retain) id value;
@property (weak, nonatomic) id<STDebouncerDelegate> delegate;

- (void).cxx_destruct;
- (void)_delegate;
- (void)_timeout;
- (void)_idle;
- (void)bounce:(id)a0;
- (id)initWithMinCoalescenceInterval:(double)a0 maxCoalescenceInterval:(double)a1;

@end
