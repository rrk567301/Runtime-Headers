@interface UINSCursor : NSCursor <UINSCursor>

@property (nonatomic) long long type;

+ (id)resizeLeftRightCursor;
+ (id)arrowCursor;
+ (id)IBeamCursor;
+ (id)pointingHandCursor;
+ (id)closedHandCursor;
+ (id)openHandCursor;
+ (id)resizeLeftCursor;
+ (id)resizeRightCursor;
+ (id)IBeamCursorForVerticalLayout;
+ (id)cursorWithType:(long long)a0;

@end
