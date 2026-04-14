@class PKDistributionChoiceItem;

@interface PKDistributionChoiceTitleButtonCell : NSButtonCell {
    PKDistributionChoiceItem *_item;
}

- (void)setState:(long long)a0;
- (id)objectValue;
- (void)setObjectValue:(id)a0;
- (long long)state;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 untilMouseUp:(BOOL)a3;

@end
