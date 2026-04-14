@interface TextInputUI.TUINetworkObserver : NSObject {
    void /* unknown type, empty encoding */ monitor;
    void /* unknown type, empty encoding */ networkMonitorQueue;
    void /* unknown type, empty encoding */ currentStatus;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isNetworkAvailable;

@end
