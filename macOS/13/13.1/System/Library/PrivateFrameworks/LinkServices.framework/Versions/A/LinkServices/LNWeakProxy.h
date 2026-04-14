@interface LNWeakProxy : NSObject

@property (readonly, weak, nonatomic) id value;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0;

@end
