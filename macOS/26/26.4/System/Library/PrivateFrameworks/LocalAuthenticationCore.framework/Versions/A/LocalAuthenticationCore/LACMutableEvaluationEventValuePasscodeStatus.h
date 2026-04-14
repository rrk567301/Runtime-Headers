@class NSNumber, NSString;

@interface LACMutableEvaluationEventValuePasscodeStatus : NSObject <LACEvaluationEventValuePasscodeStatus, LACEvaluationEventValue>

@property (nonatomic, retain) NSNumber *verificationResult;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;

@end
