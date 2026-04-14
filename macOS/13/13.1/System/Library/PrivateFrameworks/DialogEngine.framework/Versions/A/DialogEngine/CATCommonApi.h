@interface CATCommonApi : NSObject

+ (void)ConfigureDEExecutor:(id)a0 parameters:(id)a1 globalParameters:(id)a2 catId:(id)a3 callback:(id)a4 options:(int)a5;
+ (BOOL)UpdatesEnabled:(int)a0;
+ (id)DEResultToCATResult:(id)a0 catId:(id)a1;

@end
