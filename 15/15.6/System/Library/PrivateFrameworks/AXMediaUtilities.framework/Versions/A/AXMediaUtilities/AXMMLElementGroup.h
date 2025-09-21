@class AXMVisionFeature, NSMutableArray;

@interface AXMMLElementGroup : NSObject

@property (retain, nonatomic) AXMVisionFeature *feature;
@property (retain, nonatomic) NSMutableArray *subfeatures;
@property (nonatomic) char topLevel;
@property (nonatomic) char includeChildren;
@property (nonatomic) double confidence;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)textLabel;
- (id)featureLabel;
- (id)childFeatures;

@end
