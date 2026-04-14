@class NSString, NSArray;

@interface VNFgBgE5MLInstanceFeature : NSObject

@property int queryID;
@property float miyoshiConfidence;
@property float cocoConfidence;
@property float IoU;
@property float stabilityScore;
@property int miyoshiCategory;
@property int cocoCategory;
@property (retain) NSString *miyoshiCategoryName;
@property (retain) NSString *cocoCategoryName;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bbox;
@property struct CGSize { double width; double height; } mapSize;
@property (retain) NSArray *segmentation;

- (void).cxx_destruct;
- (id)initWithQueryID:(int)a0 miyoshiConfidence:(float)a1 cocoConfidence:(float)a2 IoU:(float)a3 stabilityScore:(float)a4 miyoshiCategory:(int)a5 cocoCategory:(int)a6 miyoshiCategoryName:(id)a7 cocoCategoryName:(id)a8 bbox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a9 mapSize:(struct CGSize { double x0; double x1; })a10 segmentation:(id)a11;

@end
