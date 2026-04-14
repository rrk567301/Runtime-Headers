@class NSString, ACMonitoredAccountStore;

@interface VSAccountMonitor : NSObject <ACMonitoredAccountStoreDelegateProtocol>

@property (retain, nonatomic) ACMonitoredAccountStore *monitoredAccountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)accountWasAdded:(id)a0;
- (void)_sendNotification;
- (void).cxx_destruct;
- (void)accountCredentialChanged:(id)a0;
- (void)accountWasRemoved:(id)a0;
- (id)init;
- (void)accountWasModified:(id)a0;

@end
