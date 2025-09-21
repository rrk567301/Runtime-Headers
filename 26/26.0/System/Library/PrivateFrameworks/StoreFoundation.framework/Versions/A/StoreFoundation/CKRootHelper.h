@class NSLock, NSXPCConnection;

@interface CKRootHelper : NSObject {
    NSXPCConnection *_connection;
    NSLock *_connectionLock;
}

+ (id)sharedInstance;

- (id)_connection;
- (id)proxy;
- (id)init;
- (void).cxx_destruct;

@end
