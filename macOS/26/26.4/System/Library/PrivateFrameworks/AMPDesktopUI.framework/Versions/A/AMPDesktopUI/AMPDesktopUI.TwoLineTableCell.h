@class NSString;

@interface AMPDesktopUI.TwoLineTableCell : NSTableCellView {
    void /* function */ title;
    void /* function */ subTitle;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subTitle;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
