@interface MRPortfolioFrameImage : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inner;
    struct CGSize { double width; double height; } size;
    char isImageFrame;
    char needsInset;
    char isMask;
    char isRounded;
}

@end
