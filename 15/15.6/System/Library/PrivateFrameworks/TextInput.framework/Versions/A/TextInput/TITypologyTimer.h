@interface TITypologyTimer : NSObject

@property (nonatomic) double elapsedTime;
@property (nonatomic) double mostRecentTimestamp;
@property (nonatomic) double maxTimeIntervalBetweenInputs;
@property (nonatomic) char foundFirstInput;

- (void)addInputEventWithTimestamp:(double)a0;

@end
