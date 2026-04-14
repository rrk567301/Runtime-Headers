@class CPKFont, NSString;

@interface CPKCellDrawingInfo : NSObject

@property long long index;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cellFrame;
@property (retain) CPKFont *font;
@property (copy) NSString *character;
@property unsigned short glyph;
@property BOOL needsDrawing;
@property BOOL foundFallback;

- (void)dealloc;

@end
