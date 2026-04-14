@class NSUUID;

@interface NSCGSDisplay : NSObject

@property (readonly) int displayID;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly) unsigned int depth;
@property (readonly) double backingPixelsPerPoint;
@property (readonly) struct CGSize { double width; double height; } devicePixelCounts;
@property (readonly) double maxHDRValue;
@property (readonly) double maxPotentialHDRValue;
@property (readonly) double maxReferenceHDRValue;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } daisyFrame;
@property (readonly, copy) NSUUID *UUID;
@property (readonly) struct CGColorSpace { } *colorSpace;

- (void)dealloc;
- (id)description;
- (id)initWithDisplayID:(int)a0 flipOffset:(double)a1;

@end
