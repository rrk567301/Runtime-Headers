@interface ISyncSessionDriver : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sessionDriverWithDataSource:(id)a0;

- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)client;
- (BOOL)sync;
- (id)session;
- (id)dataSource;
- (id)lastError;
- (void)finishSyncing;
- (BOOL)startAsynchronousSync:(id *)a0;
- (void)setHandlesSyncAlerts:(BOOL)a0;
- (BOOL)handlesSyncAlerts;
- (void)_setClient:(id)a0;

@end
