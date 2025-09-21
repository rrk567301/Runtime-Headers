@class MRImage, MRCroppingSprite;

@interface MRShiftingTilesRenderable : NSObject {
    struct CGPoint { double x; double y; } position;
    struct CGSize { double width; double height; } size;
    char isBreak;
}

@property (retain, nonatomic) MRImage *slide;
@property (retain, nonatomic) MRCroppingSprite *sprite;

- (void)dealloc;

@end
