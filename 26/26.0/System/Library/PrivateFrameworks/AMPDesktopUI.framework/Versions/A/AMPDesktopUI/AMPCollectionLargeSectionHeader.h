@class NSTextField, NSString, NSCollectionViewLayout, NSLayoutConstraint;

@interface AMPCollectionLargeSectionHeader : NSView

@property (retain, nonatomic) NSTextField *textField;
@property (weak, nonatomic) NSLayoutConstraint *marginConstraint;
@property (copy, nonatomic) NSString *title;
@property (weak, nonatomic) NSCollectionViewLayout *owningLayout;

+ (struct CGSize { double x0; double x1; })templateSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void).cxx_destruct;

@end
