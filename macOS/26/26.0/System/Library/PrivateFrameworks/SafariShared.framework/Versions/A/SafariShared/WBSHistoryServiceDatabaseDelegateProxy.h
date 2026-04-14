@class NSString;
@protocol NSXPCProxyCreating;

@interface WBSHistoryServiceDatabaseDelegateProxy : NSObject <WBSHistoryServiceDatabaseDelegate> {
    id<NSXPCProxyCreating> _proxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProxy:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)handleEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)reportPermanentIDsForItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)reportPermanentIDsForVisits:(id)a0 completionHandler:(id /* block */)a1;
- (void)reportSevereError:(id)a0 completionHandler:(id /* block */)a1;

@end
