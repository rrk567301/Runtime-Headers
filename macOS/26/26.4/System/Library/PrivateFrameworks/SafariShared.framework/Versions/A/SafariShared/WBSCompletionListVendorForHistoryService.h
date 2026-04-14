@class NSString, NSXPCListener, WBSHistoryConnectionProxy;
@protocol WBSCompletionListVendorForHistoryServiceDataSource;

@interface WBSCompletionListVendorForHistoryService : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_xpcListener;
    WBSHistoryConnectionProxy *_historyProxy;
    id /* block */ _completionListItemsCallback;
}

@property (readonly, weak, nonatomic) id<WBSCompletionListVendorForHistoryServiceDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)_connect;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_setExportedInterfaceAndObjectForConnection:(id)a0;

@end
