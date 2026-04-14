@class NSArray, NSString;

@interface LACMutableEvaluationEventValueBootstrap : NSObject <LACEvaluationEventValueBootstrap, LACEvaluationEventValue> {
    void /* function */ initialPosition;
}

@property (nonatomic, copy) NSArray *initialPosition;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;

@end
