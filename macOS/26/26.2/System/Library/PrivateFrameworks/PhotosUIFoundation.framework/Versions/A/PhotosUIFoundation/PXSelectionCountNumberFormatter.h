@class NSNumberFormatter;

@interface PXSelectionCountNumberFormatter : NSNumberFormatter

@property (readonly, nonatomic) NSNumberFormatter *decimalNumberFormatter;
@property (nonatomic) long long selectionNumberLimit;

- (void).cxx_destruct;
- (id)init;
- (id)stringForObjectValue:(id)a0;

@end
