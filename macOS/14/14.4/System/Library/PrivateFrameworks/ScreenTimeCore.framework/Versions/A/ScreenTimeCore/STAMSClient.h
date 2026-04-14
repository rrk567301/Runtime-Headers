@interface STAMSClient : NSObject

+ (void)handleLoadMediaTaskForResult:(id)a0 error:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)loadMediaForTask:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)makeAMSMediaTaskForApps:(id)a0 isGlobal:(BOOL)a1;
+ (id)makeGlobalQueryParamsFor:(id)a0;

@end
