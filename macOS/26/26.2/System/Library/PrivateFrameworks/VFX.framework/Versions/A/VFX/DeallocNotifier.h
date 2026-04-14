@interface DeallocNotifier : NSObject

@property (copy, nonatomic) id /* block */ onDealloc;

- (void).cxx_destruct;
- (void)dealloc;

@end
