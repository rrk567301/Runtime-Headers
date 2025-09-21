@class NSString, NSXPCListener, WBSCyclerServiceProxy;
@protocol WBSCyclerTestTarget;

@interface WBSCyclerConnectionManager : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_xpcListener;
    WBSCyclerServiceProxy *_cyclerProxy;
}

@property (class, readonly, nonatomic) unsigned long long countOfEnabledCyclers;
@property (class, readonly, nonatomic) char isBookmarkCyclerEnabled;
@property (class, readonly, nonatomic) char isTabCyclerEnabled;
@property (class, readonly, nonatomic) char shouldTabCyclerSlowDown;
@property (class, readonly, nonatomic) char isExtensionCyclerEnabled;

@property (readonly, nonatomic) id<WBSCyclerTestTarget> testTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)connect;
- (id)initWithTestTarget:(id)a0;

@end
