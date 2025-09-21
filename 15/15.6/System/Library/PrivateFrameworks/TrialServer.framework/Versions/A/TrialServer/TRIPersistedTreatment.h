@class TRIClientTreatment;

@interface TRIPersistedTreatment : TRIPBMessage

@property (retain, nonatomic) TRIClientTreatment *treatment;
@property (nonatomic) char hasTreatment;

+ (id)descriptor;

@end
