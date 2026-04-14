@class NSArray, NSString;

@interface IKTabView : NSView

@property (nonatomic) id delegate;
@property (retain) NSArray *tabs;
@property (copy) NSString *selectedTabTitle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)selectedColor;
- (void)setup;
- (void)selectionChanged:(id)a0;
- (void)adjustDisplayModes:(long long)a0;
- (id)nonSelectedColor;
- (id)selectedTabTextColor;
- (id)nonSelectedTabTextColor;
- (void)drawTab:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 enabled:(BOOL)a2;

@end
