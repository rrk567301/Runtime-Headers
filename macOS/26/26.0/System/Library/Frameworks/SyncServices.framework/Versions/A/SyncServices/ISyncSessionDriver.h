@interface ISyncSessionDriver : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sessionDriverWithDataSource:(id)a0;

- (BOOL)sync;
- (void)setDelegate:(id)a0;
- (id)dataSource;
- (id)session;
- (id)lastError;
- (id)client;
- (id)delegate;
- (void)_setClient:(id)a0;
- (void)finishSyncing;
- (BOOL)handlesSyncAlerts;
- (void)setHandlesSyncAlerts:(BOOL)a0;
- (BOOL)startAsynchronousSync:(id *)a0;

@end
