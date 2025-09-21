@interface ZhuGeSingletonArmory : NSObject

+ (id)sharedInstance;
+ (char)accessInstanceVariablesDirectly;

- (void)initData;

@end
