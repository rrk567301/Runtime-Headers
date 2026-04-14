@interface CDPWebAccessNotificationHandler : NSObject {
    BOOL _isObservingWebAccessStatus;
}

+ (id)sharedInstance;

- (void)_stopObservingWebAccessStateChangeNotification;
- (void)startObservingWebAccessStateChangeNotification;
- (void)dealloc;

@end
