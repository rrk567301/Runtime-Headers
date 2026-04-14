@interface ZhuGeSingletonArmory : NSObject

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)sharedInstance;

- (void)initData;

@end
