@interface SMUDTBlockRunner : NSObject

@property (copy, nonatomic) id /* block */ blockToRun;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;

@end
