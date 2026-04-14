@interface WLKBackgroundUpdateController : NSObject {
    int _notifyToken;
    BOOL _notifyTokenIsValid;
}

+ (id)sharedInstance;

- (id)_init;
- (id)init;
- (void)dealloc;

@end
