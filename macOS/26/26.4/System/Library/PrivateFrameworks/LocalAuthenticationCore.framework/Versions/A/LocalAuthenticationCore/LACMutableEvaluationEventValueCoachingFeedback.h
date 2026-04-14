@class NSNumber, NSString;

@interface LACMutableEvaluationEventValueCoachingFeedback : NSObject <LACEvaluationEventValueCoachingFeedback, LACEvaluationEventValue> {
    void /* function */ feedbackValue;
}

@property (nonatomic, retain) NSNumber *feedbackType;
@property (nonatomic, copy) id feedbackValue;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;

@end
