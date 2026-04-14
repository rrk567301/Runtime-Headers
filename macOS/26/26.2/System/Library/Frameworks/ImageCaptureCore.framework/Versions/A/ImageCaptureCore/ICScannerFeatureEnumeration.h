@class NSArray;

@interface ICScannerFeatureEnumeration : ICScannerFeature {
    id _evProps;
}

@property id currentValue;
@property (readonly) id defaultValue;
@property (readonly) NSArray *values;
@property (readonly) NSArray *menuItemLabels;
@property (readonly) NSArray *menuItemLabelsTooltips;

- (void)setDefaultValue:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)oldAndNewSettings:(id)a0;
- (void)setMenuItemLabels:(id)a0;
- (void)setMenuItemLabelsTooltips:(id)a0;

@end
