@class NSString, NSArray;

@interface MRScrapbookLayout : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
    double zRotation;
    double startTime;
    long long slideIndex;
    double aspectRatio;
    char stretch;
    char isText;
    char isBreak;
    char twoPart;
    char move;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } paperRect;
    long long drawCardIndex;
    char skip;
    long long moveIndex;
}

@property (retain, nonatomic) NSString *frame;
@property (retain, nonatomic) NSString *mask;
@property (retain, nonatomic) NSString *backgroundPaper;
@property (retain, nonatomic) NSArray *subtract;

- (void)dealloc;

@end
