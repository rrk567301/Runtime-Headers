@class PKPassField, NSTextField;

@interface PKBackFieldTableCellView : NSTableCellView

@property (retain, nonatomic) PKPassField *field;
@property (nonatomic) char isTopRow;
@property (nonatomic) char isBottomRow;
@property (retain) NSTextField *labelTextField;
@property (retain) NSTextField *valueTextField;

- (void).cxx_destruct;
- (char)clipsToBounds;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
