@class NSString, NSXPCSpellServerClient, NSError, NSObject;
@protocol OS_dispatch_semaphore;

@interface NSXPCSpellServerClientContext : NSObject {
    NSXPCSpellServerClient *_client;
    NSString *_messageName;
    NSObject<OS_dispatch_semaphore> *_waiter;
    NSError *_error;
    char _hasProxy;
    char _incrementIndexOnTimeout;
    char _isPostEditing;
}

+ (void)signalWaiter:(id)a0;

- (void)dealloc;
- (id)error;
- (void)finish;
- (id)client;
- (id)initWithClient:(id)a0 messageName:(id)a1 waitForReply:(char)a2 incrementIndexOnTimeout:(char)a3 isPostEditing:(char)a4;
- (id)messageName;
- (id)proxy;
- (id)waiter;

@end
