@class NSXPCConnection;

@interface CHSessionStateTracker : NSObject {
    NSXPCConnection *__connection;
    long long _state;
}

- (BOOL)isActive;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)setIdle;
- (void)setActive;

@end
