@class NSArray;

@interface ANSTPromptBasedSegmentationInput : NSObject

@property (readonly, copy, nonatomic) NSArray *points;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } box;
@property (readonly, nonatomic) struct __CVBuffer { } *mask;
@property (readonly, nonatomic) struct __CVBuffer { } *scribble;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPoints:(id)a0 box:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 mask:(struct __CVBuffer { } *)a2 scribble:(struct __CVBuffer { } *)a3;

@end
