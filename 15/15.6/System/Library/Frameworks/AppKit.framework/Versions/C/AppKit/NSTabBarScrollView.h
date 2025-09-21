@interface NSTabBarScrollView : NSScrollView

+ (Class)_horizontalScrollerClass;
+ (Class)_verticalScrollerClass;

- (char)_isConcurrentScrollingCompatible;

@end
