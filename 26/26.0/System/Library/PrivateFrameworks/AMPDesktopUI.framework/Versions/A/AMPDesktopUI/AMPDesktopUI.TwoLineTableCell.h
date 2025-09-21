@class NSString;

@interface AMPDesktopUI.TwoLineTableCell : NSTableCellView {
    void /* function */ title;
    void /* function */ subTitle;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subTitle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
