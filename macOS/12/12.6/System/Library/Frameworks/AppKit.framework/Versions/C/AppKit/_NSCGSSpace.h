@interface _NSCGSSpace : NSCGSSpace {
    unsigned long long _spaceID;
    unsigned char _flags;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _finishedResizeRect;
    unsigned int _companionWindowID;
    double _companionWindowOffset;
}

- (void)dealloc;
- (void)finishedResizeForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ackImmediately:(BOOL)a1;
- (void)setMenuBarCompanionWindow:(unsigned int)a0 offset:(double)a1;
- (void)clientDrivenMoveSpacersToPoint:(struct CGPoint { double x0; double x1; })a0 verticalIndex:(unsigned long long)a1 horizontalIndex:(unsigned long long)a2 options:(unsigned long long)a3 fencePort:(unsigned int)a4;
- (void)moveSpacersForSize:(struct CGSize { double x0; double x1; })a0 fencePort:(unsigned int)a1;
- (unsigned long long)spaceID;
- (id)initWithSpaceID:(unsigned long long)a0;

@end
