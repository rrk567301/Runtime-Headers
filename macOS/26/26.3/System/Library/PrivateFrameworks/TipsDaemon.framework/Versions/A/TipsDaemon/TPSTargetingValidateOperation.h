@class TPSTargetingValidation, NSString;

@interface TPSTargetingValidateOperation : TPSAsyncOperation

@property (nonatomic) long long result;
@property (readonly, nonatomic) TPSTargetingValidation *validator;
@property (copy, nonatomic) NSString *context;

- (void)cancel;
- (id)description;
- (void)main;
- (void).cxx_destruct;
- (id)initWithTargetingCondition:(id)a0;

@end
