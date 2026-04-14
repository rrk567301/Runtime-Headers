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
- (void)setLeftStroke:(id)a0;
- (void)setRightStroke:(id)a0;
- (void)setTopStroke:(id)a0;
- (void)setBottomStroke:(id)a0;
- (void)setHorzInsideStroke:(id)a0;
- (void)setVertInsideStroke:(id)a0;
- (void)setTopLeftToBottomRightStroke:(id)a0;
- (void)setBottomLeftToTopRightStroke:(id)a0;
- (id)leftStroke;
- (id)rightStroke;
- (id)topStroke;
- (id)bottomStroke;
- (id)topLeftToBottomRightStroke;
- (id)bottomLeftToTopRightStroke;
- (id)stroke:(int)a0;
- (void)setStrokeOfType:(int)a0 toValue:(id)a1;
- (id)horzInsideStroke;
- (id)vertInsideStroke;
- (id)shallowCopy;
- (void)applyOverridesFrom:(id)a0;

@end
