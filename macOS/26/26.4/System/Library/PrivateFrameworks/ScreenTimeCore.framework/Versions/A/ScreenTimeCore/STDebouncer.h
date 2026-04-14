@protocol STDebouncerDelegate;

@interface STDebouncer : NSObject

@property (nonatomic) double minCoalescenceInterval;
@property (nonatomic) double maxCoalescenceInterval;
@property (retain) id value;
@property (weak, nonatomic) id<STDebouncerDelegate> delegate;

- (void)_delegate;
- (void)_idle;
- (void).cxx_destruct;
- (id)initWithMinCoalescenceInterval:(double)a0 maxCoalescenceInterval:(double)a1;
- (void)bounce:(id)a0;
- (void)_timeout;

@end
