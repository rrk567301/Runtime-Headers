@class PKDistributionChoiceItem;

@interface PKDistributionChoiceTitleButtonCell : NSButtonCell {
    PKDistributionChoiceItem *_item;
}

- (void)setObjectValue:(id)a0;
- (id)objectValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setState:(long long)a0;
- (void)dealloc;
- (long long)state;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 untilMouseUp:(BOOL)a3;

@end
