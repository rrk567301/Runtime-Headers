@class NSString, NSData, NSError, NSNumber;

@interface LACMutableEvaluationEventValuePushButtonStatus : NSObject <LACEvaluationEventValuePushButtonStatus, LACEvaluationEventValue> {
    void /* function */ authorizingAccessoryId;
    void /* function */ accessoryAuthorizationError;
}

@property (nonatomic, copy) NSData *authorizingAccessoryId;
@property (nonatomic, copy) NSError *accessoryAuthorizationError;
@property (nonatomic, retain) NSNumber *accessoryAuthorizationResult;
@property (nonatomic, retain) NSNumber *isCredentialPresent;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;

@end
