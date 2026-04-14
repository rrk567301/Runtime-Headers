@interface ZhuGeSingleton : NSObject

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)sharedInstance;

- (void)initData;

@end
