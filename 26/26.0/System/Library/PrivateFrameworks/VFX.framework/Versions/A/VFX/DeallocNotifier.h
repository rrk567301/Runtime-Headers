@interface DeallocNotifier : NSObject

@property (copy, nonatomic) id /* block */ onDealloc;

- (void)dealloc;
- (void).cxx_destruct;

@end
