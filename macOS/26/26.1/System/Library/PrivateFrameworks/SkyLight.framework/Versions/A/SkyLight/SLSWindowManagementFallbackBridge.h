@class NSString, WMClientWindowManager;

@interface SLSWindowManagementFallbackBridge : NSObject <SLSWindowManagementBridgeDelegate> {
    WMClientWindowManager *_manager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)performAsynchronousBridgedWindowManagementOperation:(id)a0;
- (id)performSynchronousBridgedWindowManagementOperation:(id)a0;
- (void)performWindowManagementBridgeTransactionUsingBlock:(id /* block */)a0;

@end
