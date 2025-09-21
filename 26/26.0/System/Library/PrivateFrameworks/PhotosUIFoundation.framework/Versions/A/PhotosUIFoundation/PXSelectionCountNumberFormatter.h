@class NSNumberFormatter;

@interface PXSelectionCountNumberFormatter : NSNumberFormatter

@property (readonly, nonatomic) NSNumberFormatter *decimalNumberFormatter;
@property (nonatomic) long long selectionNumberLimit;

- (id)stringForObjectValue:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
