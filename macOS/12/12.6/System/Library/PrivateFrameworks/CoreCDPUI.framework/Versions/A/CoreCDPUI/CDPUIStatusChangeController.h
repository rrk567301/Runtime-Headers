@protocol CDPUIStatusChangeModel;

@interface CDPUIStatusChangeController : NSObject

@property (readonly, nonatomic) id<CDPUIStatusChangeModel> model;
@property (copy, nonatomic) id /* block */ userActionCallback;
@property (copy, nonatomic) id /* block */ completionCallback;

- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (void)_handleUserChoice:(unsigned long long)a0;

@end
