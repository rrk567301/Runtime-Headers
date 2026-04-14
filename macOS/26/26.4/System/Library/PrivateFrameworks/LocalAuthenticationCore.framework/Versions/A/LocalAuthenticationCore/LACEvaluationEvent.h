@class NSString;
@protocol LACEvaluationEventValue;

@interface LACEvaluationEvent : NSObject

@property (nonatomic, readonly) long long mechanism;
@property (nonatomic, readonly) long long eventType;
@property (nonatomic, readonly) long long evaluationMode;
@property (nonatomic, readonly) id<LACEvaluationEventValue> value;
@property (nonatomic, retain) id<LACEvaluationEventValue> mutableValue;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;
- (void)updateValue:(id)a0;
- (id)initWithMechanism:(long long)a0 evaluationMode:(long long)a1 eventType:(long long)a2 value:(id)a3;

@end
