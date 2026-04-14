@class MOPhotosAtlasSegment;

@interface MOPhotosAtlasSegmentRow : NSObject

@property (readonly, retain, nonatomic) MOPhotosAtlasSegment *segment;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (void).cxx_destruct;
- (BOOL)isComplete;
- (id)imageRef;
- (id)mediaItems;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageContentsRect;
- (id)invalidIndexes;
- (id)initWithSegment:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
