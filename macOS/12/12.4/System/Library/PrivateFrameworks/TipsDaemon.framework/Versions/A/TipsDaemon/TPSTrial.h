@protocol TPSTrialUpdateHandler;

@interface TPSTrial : NSObject

@property (weak, nonatomic) id<TPSTrialUpdateHandler> updateHandler;

- (void).cxx_destruct;
- (id)levelForFactor:(id)a0;
- (id)initWithUpdateHandler:(id)a0;
- (id)clientObject;

@end
