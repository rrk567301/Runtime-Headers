@interface CDPWebAccessNotificationHandler : NSObject {
    BOOL _isObservingWebAccessStatus;
}

+ (id)sharedInstance;

- (void)startObservingWebAccessStateChangeNotification;
- (void)_stopObservingWebAccessStateChangeNotification;
- (void)dealloc;

@end
