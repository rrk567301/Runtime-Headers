@class NSLock, NSXPCConnection;

@interface CKRootHelper : NSObject {
    NSXPCConnection *_connection;
    NSLock *_connectionLock;
}

+ (id)sharedInstance;

- (id)_connection;
- (id)proxy;
- (void).cxx_destruct;
- (id)init;

@end
