@class WFDateFieldParameter;

@interface WFDateIntervalParameter : WFParameter

@property (readonly, nonatomic) WFDateFieldParameter *startSubparameter;
@property (readonly, nonatomic) WFDateFieldParameter *endSubparameter;

+ (id)endKey;
+ (id)startKey;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (Class)singleStateClass;
- (id)subparameterForKey:(id)a0;

@end
