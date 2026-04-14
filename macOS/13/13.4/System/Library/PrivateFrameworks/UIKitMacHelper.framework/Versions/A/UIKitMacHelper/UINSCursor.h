@interface UINSCursor : NSCursor <UINSCursor>

@property (nonatomic) long long type;

+ (id)IBeamCursor;
+ (id)IBeamCursorForVerticalLayout;
+ (id)arrowCursor;
+ (id)closedHandCursor;
+ (id)openHandCursor;
+ (id)pointingHandCursor;
+ (id)resizeLeftCursor;
+ (id)resizeLeftRightCursor;
+ (id)resizeRightCursor;
+ (id)cursorWithType:(long long)a0;

@end
