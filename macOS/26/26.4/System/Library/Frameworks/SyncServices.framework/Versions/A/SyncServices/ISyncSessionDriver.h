@interface ISyncSessionDriver : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sessionDriverWithDataSource:(id)a0;

- (BOOL)sync;
- (id)dataSource;
- (id)delegate;
- (id)client;
- (id)lastError;
- (void)setDelegate:(id)a0;
- (id)session;
- (void)_setClient:(id)a0;
- (void)finishSyncing;
- (BOOL)handlesSyncAlerts;
- (void)setHandlesSyncAlerts:(BOOL)a0;
- (BOOL)startAsynchronousSync:(id *)a0;

@end
