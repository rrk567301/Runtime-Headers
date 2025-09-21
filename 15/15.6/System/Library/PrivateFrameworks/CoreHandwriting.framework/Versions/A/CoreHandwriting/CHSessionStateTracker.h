@class NSXPCConnection;

@interface CHSessionStateTracker : NSObject {
    NSXPCConnection *__connection;
    long long _state;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)isActive;
- (void)setIdle;
- (void)setActive;

@end
