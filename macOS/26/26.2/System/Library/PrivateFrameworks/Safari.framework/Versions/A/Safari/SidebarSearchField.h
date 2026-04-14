@protocol SidebarSearchFieldDelegate;

@interface SidebarSearchField : NSSearchField

@property (weak, nonatomic) id<SidebarSearchFieldDelegate> sidebarSearchFieldDelegate;
@property (weak, nonatomic) id accessibilityOverrideParent;

+ (void)initialize;

- (id)initWithCoder:(id)a0;
- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityParent;
- (void)_sidebarSearchFieldInit;

@end
