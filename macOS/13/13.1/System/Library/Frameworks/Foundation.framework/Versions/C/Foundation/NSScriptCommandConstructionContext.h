@interface NSScriptCommandConstructionContext : NSObject

+ (void)beginConstructionWithSuiteRegistry:(id)a0;
+ (void)endConstruction;
+ (void)setCurrentConstructionContext:(id)a0;
+ (id)currentConstructionContext;

@end
