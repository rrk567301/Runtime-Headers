@interface ICScannerFeatureRange : ICScannerFeature {
    id _rvProps;
}

@property double currentValue;
@property (readonly) double defaultValue;
@property (readonly) double minValue;
@property (readonly) double maxValue;
@property (readonly) double stepSize;

- (id)description;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (double)getValidatedValue:(double)a0;
- (id)oldAndNewSettings:(id)a0;

@end
