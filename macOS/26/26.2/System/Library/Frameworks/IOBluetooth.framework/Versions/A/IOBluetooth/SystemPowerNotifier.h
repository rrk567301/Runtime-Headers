@interface SystemPowerNotifier : NSObject {
    id _delegate;
    unsigned int _notifier;
    struct IONotificationPort { } *_notificationPort;
}

@property unsigned int rootConnection;

+ (id)systemPowerNotifierWithTarget:(id)a0;

- (void)finalize;
- (void).cxx_destruct;
- (BOOL)notifyDelegate:(unsigned int)a0;
- (id)init;
- (void)setDelegate:(id)a0;
- (void)dealloc;

@end
