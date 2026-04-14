@class NSNumber, NSString;

@interface LACMutableEvaluationEventValueCompanionStatus : NSObject <LACEvaluationEventValueCompanionStatus, LACEvaluationEventValue>

@property (nonatomic, retain) NSNumber *authenticationResult;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;

@end
