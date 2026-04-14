@class NSNumberFormatter;

@interface PXSelectionCountNumberFormatter : NSNumberFormatter

@property (readonly, nonatomic) NSNumberFormatter *decimalNumberFormatter;
@property (nonatomic) long long selectionNumberLimit;

- (void).cxx_destruct;
- (id)stringForObjectValue:(id)a0;
- (id)init;

@end
