@interface ISyncSessionDriver : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sessionDriverWithDataSource:(id)a0;

- (BOOL)sync;
- (id)session;
- (id)dataSource;
- (id)lastError;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (id)client;
- (void)_setClient:(id)a0;
- (void)finishSyncing;
- (BOOL)handlesSyncAlerts;
- (void)setHandlesSyncAlerts:(BOOL)a0;
- (BOOL)startAsynchronousSync:(id *)a0;

@end
