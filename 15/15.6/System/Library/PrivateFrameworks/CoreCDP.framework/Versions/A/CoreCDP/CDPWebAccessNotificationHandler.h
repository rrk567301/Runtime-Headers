@interface CDPWebAccessNotificationHandler : NSObject {
    char _isObservingWebAccessStatus;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void)_stopObservingWebAccessStateChangeNotification;
- (void)startObservingWebAccessStateChangeNotification;

@end
