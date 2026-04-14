@interface UINSCursor : NSCursor <UINSCursor>

@property (nonatomic) long long type;

+ (id)arrowCursor;
+ (id)IBeamCursor;
+ (id)pointingHandCursor;
+ (id)closedHandCursor;
+ (id)openHandCursor;
+ (id)resizeLeftCursor;
+ (id)resizeRightCursor;
+ (id)resizeLeftRightCursor;
+ (id)IBeamCursorForVerticalLayout;
+ (id)cursorWithType:(long long)a0;

@end
