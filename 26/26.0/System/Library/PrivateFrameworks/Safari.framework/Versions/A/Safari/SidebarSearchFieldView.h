@class NSSearchField;
@protocol SidebarSearchFieldViewDelegate;

@interface SidebarSearchFieldView : NSView

@property (weak, nonatomic) id<SidebarSearchFieldViewDelegate> delegate;
@property (readonly, nonatomic) NSSearchField *searchField;
@property (weak, nonatomic) id accessibilityOverrideParent;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityParent;
- (void)_searchStringDidChange:(id)a0;

@end
