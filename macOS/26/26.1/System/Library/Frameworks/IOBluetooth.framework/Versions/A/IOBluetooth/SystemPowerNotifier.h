@interface SystemPowerNotifier : NSObject {
    id _delegate;
    unsigned int _notifier;
    struct IONotificationPort { } *_notificationPort;
}

@property unsigned int rootConnection;

+ (id)systemPowerNotifierWithTarget:(id)a0;

- (void)setDelegate:(id)a0;
- (BOOL)notifyDelegate:(unsigned int)a0;
- (void)finalize;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;

@end
