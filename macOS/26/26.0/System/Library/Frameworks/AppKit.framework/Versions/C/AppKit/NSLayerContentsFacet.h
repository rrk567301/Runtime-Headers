@class NSImage;

@interface NSLayerContentsFacet : NSObject

@property (retain) NSImage *image;
@property (retain) id contents;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsCenter;
@property double contentsScale;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } drawingRect;

- (void)dealloc;
- (double)totalSize;
- (void)dropToImage;

@end
