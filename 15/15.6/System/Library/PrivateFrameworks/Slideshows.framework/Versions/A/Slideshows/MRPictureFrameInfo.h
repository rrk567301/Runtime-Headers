@class NSString;

@interface MRPictureFrameInfo : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } tableRect;
    char onTable;
    char ignoreMatte;
    char useLastFrame;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rect;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } tableRect;
@property (nonatomic) char onTable;
@property (copy, nonatomic) NSString *aspectRatio;
@property (nonatomic) char ignoreMatte;
@property (nonatomic) char useLastFrame;

- (void)dealloc;

@end
