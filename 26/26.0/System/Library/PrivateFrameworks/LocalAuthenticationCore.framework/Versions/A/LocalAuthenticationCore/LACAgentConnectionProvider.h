@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface LACAgentConnectionProvider : NSObject <LACUserInterfaceConnectionProviding> {
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithReplyQueue:(id)a0;
- (id)makeConnectionForRequest:(id)a0 withExportedObject:(id)a1;

@end
