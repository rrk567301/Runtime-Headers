@class NSNumberFormatter;

@interface PXSelectionCountNumberFormatter : NSNumberFormatter

@property (readonly, nonatomic) NSNumberFormatter *decimalNumberFormatter;
@property (nonatomic) long long selectionNumberLimit;

- (id)stringForObjectValue:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
