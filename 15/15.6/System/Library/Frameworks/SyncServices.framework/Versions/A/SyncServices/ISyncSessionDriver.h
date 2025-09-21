@interface ISyncSessionDriver : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sessionDriverWithDataSource:(id)a0;

- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)client;
- (char)sync;
- (id)session;
- (id)dataSource;
- (id)lastError;
- (void)_setClient:(id)a0;
- (void)finishSyncing;
- (char)handlesSyncAlerts;
- (void)setHandlesSyncAlerts:(char)a0;
- (char)startAsynchronousSync:(id *)a0;

@end
