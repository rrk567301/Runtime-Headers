@interface CDPWebAccessNotificationHandler : NSObject {
    BOOL _isObservingWebAccessStatus;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void)startObservingWebAccessStateChangeNotification;
- (void)_stopObservingWebAccessStateChangeNotification;

@end
