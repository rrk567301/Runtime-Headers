@interface AXMTask : NSObject

@property (nonatomic, getter=isComplete) char complete;
@property (copy, nonatomic) id /* block */ taskCompleteBlock;

- (void).cxx_destruct;
- (void)markAsComplete:(char)a0;

@end
