@class NSError, NSNumber, NSString;
@protocol NSSecureCoding;

@interface LACMutableEvaluationEventValueActivity : NSObject <LACEvaluationEventValueActivity, LACEvaluationEventValue> {
    void /* function */ evaluationError;
}

@property (nonatomic) BOOL isActive;
@property (nonatomic, copy) NSError *evaluationError;
@property (nonatomic, retain) id<NSSecureCoding> hostedSceneConfiguration;
@property (nonatomic, retain) NSNumber *preRequisite;
@property (nonatomic, retain) NSNumber *postRequisite;
@property (nonatomic, retain) NSNumber *parent;
@property (nonatomic, retain) NSNumber *parentK;
@property (nonatomic, retain) NSNumber *parentN;
@property (nonatomic, readonly) NSString *description;

- (id)initWithValue:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
