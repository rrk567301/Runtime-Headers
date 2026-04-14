@interface _FeatureFlagRule : NSObject

@property (copy, nonatomic) id /* block */ stateDeterminer;
@property (copy, nonatomic) id /* block */ payloadGenerator;

- (void).cxx_destruct;

@end
