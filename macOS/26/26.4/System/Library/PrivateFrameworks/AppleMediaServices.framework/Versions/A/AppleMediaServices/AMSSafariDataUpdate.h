@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AMSSafariDataUpdate : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSMutableArray *updateHandlers;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_handleUpdateAvailableNotification:(id)a0;
- (void)_invokeHandlersWithURL:(id)a0;
- (id)publishUpdate:(id)a0;
- (void)registerForUpdatesWithHandler:(id /* block */)a0;

@end
