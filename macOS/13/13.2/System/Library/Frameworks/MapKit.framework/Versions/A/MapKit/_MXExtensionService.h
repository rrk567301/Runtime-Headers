@class NSUUID, NSViewController, _MXSerialQueue, NSExtension, _MXExtension;
@protocol _MXExtensionURLHandling;

@interface _MXExtensionService : NSObject {
    _MXSerialQueue *_serialQueue;
    BOOL _didSendConnectionTerminationNotifcation;
}

@property (readonly, nonatomic) NSUUID *serviceIdentifier;
@property (retain, nonatomic) NSUUID *connectionIdentifier;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSViewController *remoteViewController;
@property (retain, nonatomic) NSExtension *realExtension;
@property (weak, nonatomic) id<_MXExtensionURLHandling> URLHandlingDelegate;
@property (readonly, nonatomic) _MXExtension *extensionProxy;

+ (id)extensionCompletionQueue;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (int)processIdentifier;
- (void)cancel;
- (id)context;
- (id)extension;
- (id)handleRequest:(id)a0 requestDispatcher:(id)a1 completion:(id /* block */)a2;
- (id)startSendingUpdatesForRequest:(id)a0 requestDispatcher:(id)a1 toObserver:(id)a2;
- (void)stopSendingUpdatesForRequest:(id)a0 requestDispatcher:(id)a1;
- (id)initWithExtensionProxy:(id)a0;
- (void)connectExtensionWithHandler:(id /* block */)a0;
- (void)connectUIExtensionWithHandler:(id /* block */)a0;
- (void)connectExtensionWithRemoteViewControllerNeeded:(BOOL)a0 Handler:(id /* block */)a1;
- (void)_connectExtensionWithRemoteViewControllerNeeded:(BOOL)a0 Handler:(id /* block */)a1;
- (void)disconnectExtension;
- (id)vendorContextWithErrorHandler:(id /* block */)a0;

@end
