@class NSString;

@interface CPKCalculatedGeometry : NSObject

@property (nonatomic) struct CGSize { double width; double height; } minimumItemSize;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) double fontSize;
@property (nonatomic) unsigned long long cellCountInRow;
@property (nonatomic) struct CGSize { double width; double height; } margin;
@property (nonatomic) struct CGSize { double width; double height; } drawCellGap;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } drawCellSize;

+ (id)_geometryForCombinedEmoji;
+ (id)_geometryForPlainEmoji;
+ (id)geometryForEmoji;
+ (id)geometryForImageGlyphs;
+ (id)geometryForSymbols;

- (void).cxx_destruct;
- (id)description;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlightRectForCellRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
