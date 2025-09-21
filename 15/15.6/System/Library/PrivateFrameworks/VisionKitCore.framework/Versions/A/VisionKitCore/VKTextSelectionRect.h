@class VKTextSelectionRectCustomHandleInfo, NSBezierPath, NSString, VKQuad;

@interface VKTextSelectionRect : VKBaseTextSelectionRect

@property (nonatomic) char containsStart;
@property (nonatomic) char containsEnd;
@property (copy, nonatomic) NSBezierPath *_path;
@property (retain, nonatomic) VKTextSelectionRectCustomHandleInfo *_customHandleInfo;
@property (nonatomic) unsigned long long layoutDirection;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (retain, nonatomic) NSString *_transcript;
@property (readonly, nonatomic) VKQuad *quad;

- (id)description;
- (void).cxx_destruct;
- (char)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (char)isVertical;
- (long long)writingDirection;
- (id)summaryDescription;
- (id)handleInfoForQuad:(id)a0 origin:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containsStart:(char)a1 containsEnd:(char)a2 layoutDirection:(unsigned long long)a3 quad:(id)a4;

@end
