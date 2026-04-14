@class NSArray;

@interface ICScannerFeatureTemplate : ICScannerFeature {
    id _tvProps;
}

@property (readonly) NSArray *targets;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0 andFunctionalUnit:(id)a1;

@end
