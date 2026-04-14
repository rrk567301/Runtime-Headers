@interface SHSessionStoreDaemonConnection : NSObject

+ (id)serverConnection;
+ (void)fetchPendingRematchSignaturesWithCompletionHandler:(id /* block */)a0;
+ (void)fetchRematchedResultsWithCompletionHandler:(id /* block */)a0;
+ (void)removeRematchedResults:(id)a0 completionHandler:(id /* block */)a1;
+ (void)scheduleRematchNotificationWithResults:(id)a0 completionHandler:(id /* block */)a1;
+ (id)uiServiceConnection;

@end
