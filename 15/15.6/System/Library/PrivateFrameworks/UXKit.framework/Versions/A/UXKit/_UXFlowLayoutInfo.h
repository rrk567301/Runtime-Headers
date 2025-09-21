@class NSDictionary, NSMutableArray;

@interface _UXFlowLayoutInfo : NSObject {
    char _useFloatingHeaderFooter;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _visibleBounds;
    struct CGSize { double width; double height; } _layoutSize;
    char _isValid;
}

@property (readonly, nonatomic) NSMutableArray *sections;
@property (nonatomic) char usesFloatingHeaderFooter;
@property (nonatomic) double dimension;
@property (nonatomic) char horizontal;
@property (nonatomic) char leftToRight;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) NSDictionary *rowAlignmentOptions;

- (void)dealloc;
- (id)copy;
- (id)init;
- (id)snapshot;
- (id)addSection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForItemAtIndexPath:(id)a0;
- (void)invalidate:(char)a0;

@end
