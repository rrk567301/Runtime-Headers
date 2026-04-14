@class OADStroke;

@interface OADTableCellBorderStyle : NSObject {
    OADStroke *mLeftStroke;
    OADStroke *mRightStroke;
    OADStroke *mTopStroke;
    OADStroke *mBottomStroke;
    OADStroke *mHorzInsideStroke;
    OADStroke *mVertInsideStroke;
    OADStroke *mTopLeftToBottomRightStroke;
    OADStroke *mBottomLeftToTopRightStroke;
}

+ (id)defaultAxisParallelStroke;
+ (id)defaultObliqueStroke;
+ (id)defaultStyle;

- (id)description;
- (void).cxx_destruct;
- (id)stroke:(int)a0;
- (void)setStrokeOfType:(int)a0 toValue:(id)a1;
- (id)leftStroke;
- (void)setLeftStroke:(id)a0;
- (id)rightStroke;
- (void)setRightStroke:(id)a0;
- (id)topStroke;
- (void)setTopStroke:(id)a0;
- (id)bottomStroke;
- (void)setBottomStroke:(id)a0;
- (id)topLeftToBottomRightStroke;
- (void)setTopLeftToBottomRightStroke:(id)a0;
- (id)bottomLeftToTopRightStroke;
- (void)setBottomLeftToTopRightStroke:(id)a0;
- (id)horzInsideStroke;
- (void)setHorzInsideStroke:(id)a0;
- (id)vertInsideStroke;
- (void)setVertInsideStroke:(id)a0;
- (id)shallowCopy;
- (void)applyOverridesFrom:(id)a0;

@end
