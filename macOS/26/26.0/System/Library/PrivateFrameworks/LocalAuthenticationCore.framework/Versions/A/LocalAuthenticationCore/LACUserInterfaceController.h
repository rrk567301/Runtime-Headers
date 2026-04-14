@class NSString, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface LACUserInterfaceController : NSObject <LACUserInterfaceController> {
    NSMapTable *_activeUserInterfaces;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userInterface;
- (void).cxx_destruct;
- (id)initWithReplyQueue:(id)a0;
- (void)terminateAllUserInterfacesWithReason:(id)a0;
- (void)terminateUserInterfaceWithUUID:(id)a0 reason:(id)a1;
- (id)userInterfaceWithUUID:(id)a0;

@end
