@class NSXPCConnection;

@interface CHSessionStateTracker : NSObject {
    NSXPCConnection *__connection;
    long long _state;
}

- (void)dealloc;
- (BOOL)isActive;
- (id)init;
- (void).cxx_destruct;
- (void)setIdle;
- (void)setActive;

@end
