@class NSString, TRIPBTimestamp, TRIPersistedFactorsState;

@interface TRIPersistedEvaluationStatus : TRIPBMessage

@property (nonatomic) unsigned int type;
@property (nonatomic) char hasType;
@property (copy, nonatomic) NSString *evaluationId;
@property (nonatomic) char hasEvaluationId;
@property (retain, nonatomic) TRIPBTimestamp *timestamp;
@property (nonatomic) char hasTimestamp;
@property (retain, nonatomic) TRIPersistedFactorsState *evalState;
@property (nonatomic) char hasEvalState;

+ (id)descriptor;

@end
