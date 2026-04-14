@interface ICScannerFeatureBoolean : ICScannerFeature {
    id _bvProps;
}

@property BOOL value;

- (void)dealloc;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)oldAndNewSettings:(id)a0;

@end
