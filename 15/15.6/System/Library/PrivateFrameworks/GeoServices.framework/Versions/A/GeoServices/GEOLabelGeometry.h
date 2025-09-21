@class NSArray;

@interface GEOLabelGeometry : NSObject

@property (readonly, nonatomic) NSArray *labelShape;
@property (readonly, nonatomic) char hasSelectionPolygon;

- (void).cxx_destruct;
- (id)initWithGEOPDLabelGeometry:(id)a0;
- (id)initWithLabelShape:(id)a0 hasSelectionPolygon:(char)a1;

@end
