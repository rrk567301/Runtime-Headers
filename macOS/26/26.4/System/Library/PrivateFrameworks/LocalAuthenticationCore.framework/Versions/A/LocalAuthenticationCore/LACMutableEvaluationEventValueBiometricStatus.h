@class NSString, NSDictionary, NSError, NSNumber;

@interface LACMutableEvaluationEventValueBiometricStatus : NSObject <LACEvaluationEventValueBiometricStatus, LACEvaluationEventValue> {
    void /* function */ lockoutError;
    void /* function */ payload;
}

@property (nonatomic, copy) NSError *lockoutError;
@property (nonatomic, retain) NSNumber *matchingStatus;
@property (nonatomic, copy) NSDictionary *payload;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;

@end
