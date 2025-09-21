@class NSAttributedString;

@interface ODCEmptyMessageTableView : NSTableView {
    NSAttributedString *_emptyListMsg;
    int _msgRow;
}

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)keyDown:(id)a0;
- (void)awakeFromNib;
- (void)setAttributedMesageForEmptyList:(id)a0;
- (void)setMesageForEmptyList:(id)a0;
- (void)setMessageRow:(int)a0;

@end
