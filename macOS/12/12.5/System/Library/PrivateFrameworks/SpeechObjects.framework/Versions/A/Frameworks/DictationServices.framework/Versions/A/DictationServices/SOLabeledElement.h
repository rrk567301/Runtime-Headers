@class NSString, NSMutableArray;

@interface SOLabeledElement : NSObject

@property (retain, nonatomic) id element;
@property (retain, nonatomic) NSMutableArray *labels;
@property (readonly, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *numberedLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectangle;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectangleFlipped;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } labelRectangleFlipped;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerRectangleFlipped;
@property (nonatomic) BOOL hasBeenCollected;
@property (nonatomic) long long desiredArrowOrientation;
@property (retain, nonatomic) id textMarkerRange;

+ (struct CGSize { double x0; double x1; })sizeOfNumberedBadgeForLabel:(id)a0 arrowOrientation:(long long)a1 useFixedWidthNumerals:(BOOL)a2;

- (void)dealloc;
- (id)description;
- (id)attributedStringForLabelMode:(int)a0;
- (long long)verticalPositionCompare:(id)a0;
- (long long)horizontalPositionCompare:(id)a0;
- (void)updateLabelRectangleForLabelMode:(int)a0 useFixedWidthNumerals:(BOOL)a1;
- (id)initWithElement:(id)a0 labels:(id)a1 rectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)recognitionStringsForLabelMode:(int)a0;

@end
