@interface TRICounterfactualLogging : TRIPBMessage

@property (nonatomic) int version;
@property (nonatomic) char hasVersion;

+ (id)descriptor;

@end
