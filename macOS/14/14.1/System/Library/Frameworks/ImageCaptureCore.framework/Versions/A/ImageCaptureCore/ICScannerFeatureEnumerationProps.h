@class NSArray;

@interface ICScannerFeatureEnumerationProps : NSObject

@property unsigned long long indexOfCurrentValue;
@property unsigned long long indexOfDefaultValue;
@property id currentValue;
@property id defaultValue;
@property (retain) NSArray *values;
@property (retain) NSArray *menuItemLabels;
@property (retain) NSArray *menuItemLabelsTooltips;

- (void)dealloc;
- (id)getValidatedValue:(id)a0;

@end
