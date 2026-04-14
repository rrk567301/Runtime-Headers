@interface _NSWindowMoveData : NSObject

@property struct CGPoint { double x; double y; } startingOrigin;
@property struct CGPoint { double x; double y; } startingEventLocation;
@property struct CGPoint { double x; double y; } lastEventLocation;
@property struct CGSize { double width; double height; } offset;
@property struct CGPoint { double x; double y; } newEventLocation;
@property struct CGSize { double width; double height; } catchupSize;

@end
