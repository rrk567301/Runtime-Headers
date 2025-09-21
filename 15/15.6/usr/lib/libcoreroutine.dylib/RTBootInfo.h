@interface RTBootInfo : NSObject

+ (id)getCurrentBootSessionID;
+ (char)isFirstRunSinceBootWithDefaultsManager:(id)a0 defaultsKey:(id)a1;
+ (void)setBootSessionIDWithDefaultsManager:(id)a0 defaultsKey:(id)a1;

@end
