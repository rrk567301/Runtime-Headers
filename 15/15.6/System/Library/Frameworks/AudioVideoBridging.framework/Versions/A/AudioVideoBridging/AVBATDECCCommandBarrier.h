@interface AVBATDECCCommandBarrier : AVBATDECCCommandEvent

@property (nonatomic) char recoveryBarrier;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ recoveryHandler;

- (void).cxx_destruct;

@end
