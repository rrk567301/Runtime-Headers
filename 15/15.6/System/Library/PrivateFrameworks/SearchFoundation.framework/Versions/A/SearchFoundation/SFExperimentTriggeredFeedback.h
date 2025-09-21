@class SFCounterfactualInfo, NSUUID;

@interface SFExperimentTriggeredFeedback : SFFeedback

@property (retain, nonatomic) SFCounterfactualInfo *counterfactual;
@property (retain, nonatomic) NSUUID *codepathId;

+ (char)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCfDiffered:(char)a0 cfUsed:(char)a1 cfError:(unsigned long long)a2;
- (id)initWithCodepathId:(id)a0;

@end
