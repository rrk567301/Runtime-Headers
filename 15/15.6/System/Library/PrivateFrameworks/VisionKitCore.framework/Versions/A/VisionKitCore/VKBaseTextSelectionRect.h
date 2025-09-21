@interface VKBaseTextSelectionRect : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (readonly, nonatomic) long long writingDirection;
@property (readonly, nonatomic) char containsStart;
@property (readonly, nonatomic) char containsEnd;
@property (readonly, nonatomic) char isVertical;

@end
