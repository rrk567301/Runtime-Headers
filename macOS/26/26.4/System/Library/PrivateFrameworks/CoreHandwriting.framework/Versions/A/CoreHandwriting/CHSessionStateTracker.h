@class NSXPCConnection;

@interface CHSessionStateTracker : NSObject {
    NSXPCConnection *__connection;
    long long _state;
}

- (BOOL)isActive;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setIdle;
- (void)setActive;

@end
