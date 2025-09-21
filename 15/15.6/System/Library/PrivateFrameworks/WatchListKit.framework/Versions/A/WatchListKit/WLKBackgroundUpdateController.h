@interface WLKBackgroundUpdateController : NSObject {
    int _notifyToken;
    char _notifyTokenIsValid;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)_init;

@end
