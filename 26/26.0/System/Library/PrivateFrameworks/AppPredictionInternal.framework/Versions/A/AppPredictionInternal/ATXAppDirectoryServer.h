@class NSString, NSXPCListener;

@interface ATXAppDirectoryServer : NSObject <NSXPCListenerDelegate, ATXAppDirectoryInterface> {
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)notifyBookmarksDidChange;
- (void)categoriesWithReply:(id /* block */)a0;
- (id)init;
- (void)appLaunchDatesWithReply:(id /* block */)a0;
- (void)requestNotificationWhenCategoriesAreReady;
- (void).cxx_destruct;

@end
