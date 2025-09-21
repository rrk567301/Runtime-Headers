@class LACBiomeEvaluationMechanismState, NSString;

@interface LACBiomeEvaluationEvent : NSObject

@property (readonly, nonatomic) long long policy;
@property (readonly, nonatomic) long long errorCode;
@property (readonly, nonatomic) LACBiomeEvaluationMechanismState *biometry;
@property (readonly, nonatomic) LACBiomeEvaluationMechanismState *passcode;
@property (readonly, nonatomic) long long dtoState;
@property (readonly, nonatomic) long long ratchetState;
@property (readonly, nonatomic) NSString *callerBundleId;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPolicy:(long long)a0 errorCode:(long long)a1 biometry:(id)a2 passcode:(id)a3 dtoState:(long long)a4 ratchetState:(long long)a5 callerBundleID:(id)a6;

@end
