@class SRParameter;

@interface SRTrialParameter : NSObject

@property (readonly, nonatomic) SRParameter *parameter;
@property (nonatomic) BOOL hasValueFromTrial;

- (void).cxx_destruct;
- (id)description;
- (id)initWithParameter:(id)a0;

@end
