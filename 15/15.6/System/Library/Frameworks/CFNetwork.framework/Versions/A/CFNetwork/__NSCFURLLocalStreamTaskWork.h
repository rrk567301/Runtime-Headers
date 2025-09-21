@class NSError;

@interface __NSCFURLLocalStreamTaskWork : NSObject {
    const char *_static_description;
    double _timeout;
    double _timeoutTime;
    NSError *_recvdError;
    char _hasBeenCalledBack;
    char _timerStarted;
}

- (id)description;

@end
