@class ATXCoreDuetContextHelper;
@protocol ATXPredictionContextBuilderProtocol, ATXUpdatePredictionsDelegate;

@interface ATXScreenUnlockUpdateSource : NSObject <ATXUpdatePredictionsSource>

@property (weak, nonatomic) id<ATXUpdatePredictionsDelegate> delegate;
@property (retain, nonatomic) ATXCoreDuetContextHelper *contextHelper;
@property (retain, nonatomic) id<ATXPredictionContextBuilderProtocol> predictionContextBuilder;

- (id)initWithContextHelper:(id)a0 predictionContextBuilder:(id)a1;
- (void)_handleScreenUnlockEvent;
- (void).cxx_destruct;
- (id)init;
- (void)_listenForScreenUnlock;

@end
