@class NSTextField, NSString, NSViewSpy, ItemReflectionButton, NSButton;

@interface ConstraintCell : NSTableCellView

@property (weak, nonatomic) ItemReflectionButton *firstItem;
@property (weak, nonatomic) NSTextField *firstText;
@property (weak, nonatomic) ItemReflectionButton *secondItem;
@property (weak, nonatomic) NSTextField *secondText;
@property (weak, nonatomic) NSButton *warning;
@property (weak, nonatomic) id baseItem;
@property (weak, nonatomic) NSViewSpy *targetDisplay;
@property (readonly, nonatomic) NSString *firstItemText;
@property (readonly, nonatomic) NSString *secondItemText;

+ (id)keyPathsForValuesAffectingFirstItemText;
+ (id)keyPathsForValuesAffectingSecondItemText;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setObjectValue:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)assignBase:(id)a0 andTarget:(id)a1;
- (void)setStyles;
- (void)explainUnsatisfaction:(id)a0;

@end
