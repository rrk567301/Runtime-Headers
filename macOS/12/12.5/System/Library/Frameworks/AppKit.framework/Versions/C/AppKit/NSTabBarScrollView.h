@interface NSTabBarScrollView : NSScrollView

+ (Class)_verticalScrollerClass;
+ (Class)_horizontalScrollerClass;

- (BOOL)_isConcurrentScrollingCompatible;

@end
