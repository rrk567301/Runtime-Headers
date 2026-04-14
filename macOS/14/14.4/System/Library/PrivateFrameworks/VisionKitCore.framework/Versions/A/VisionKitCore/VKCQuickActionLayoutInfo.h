@class NSView;

@interface VKCQuickActionLayoutInfo : NSObject

@property (retain, nonatomic) NSView *view;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) BOOL hidden;

- (void).cxx_destruct;

@end
