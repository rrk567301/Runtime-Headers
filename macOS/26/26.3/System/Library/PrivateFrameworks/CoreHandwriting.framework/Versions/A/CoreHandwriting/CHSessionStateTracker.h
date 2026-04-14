@class NSXPCConnection;

@interface CHSessionStateTracker : NSObject {
    NSXPCConnection *__connection;
    long long _state;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isActive;
- (void)setIdle;
- (void)setActive;

@end
