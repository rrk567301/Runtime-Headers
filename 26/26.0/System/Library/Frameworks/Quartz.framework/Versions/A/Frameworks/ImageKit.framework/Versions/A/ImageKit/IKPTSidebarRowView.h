@class NSString, NSTextField;

@interface IKPTSidebarRowView : NSTableRowView {
    NSTextField *_label;
}

@property (copy, nonatomic) NSString *title;

+ (id)newLabel;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutLabel;

@end
