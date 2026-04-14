@class NSXPCConnection, NSView, NSString, NSExtension, NSArray, NSObject, NSRemoteViewController, NSXPCListener, NSImage;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PPSpecifierExtensionItem : NSObject <PPSpecifierExtensionPosting, NSXPCListenerDelegate> {
    BOOL _editable;
    NSArray *_searchKeywords;
}

@property (retain) NSXPCListener *listener;
@property (retain) NSXPCConnection *commConnection;
@property (retain) NSRemoteViewController *remoteViewController;
@property (retain) NSExtension *extension;
@property (retain) NSView *extensionViewHost;
@property (retain) NSObject<OS_dispatch_semaphore> *commConnectionQueueSema;
@property (retain) NSObject<OS_dispatch_queue> *commConnectionQueue;
@property (copy) id /* block */ viewDidLoadCompleteBlock;
@property BOOL extenionDidLoad;
@property (readonly) NSString *name;
@property (readonly) NSImage *icon;
@property (getter=isEditable) BOOL editable;
@property (readonly) NSView *view;
@property (readonly) NSString *extensionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;

- (void)updateView;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)setPersonality:(id)a0;
- (void)setEditable:(BOOL)a0;
- (BOOL)loadWithCompletion:(id /* block */)a0;
- (void)___nsx_pingHost:(id /* block */)a0;
- (id)name;
- (id)icon;
- (id)initWithExtension:(id)a0;
- (id)view;
- (void).cxx_destruct;
- (id)helpAnchor;
- (void)didUnselect;
- (void)willSelect;
- (BOOL)hasElementForKey:(id)a0;
- (void)revealElementForKey:(id)a0;
- (void)extension:(id)a0 viewBridgeEndpoint:(id)a1 commChannelEndpoint:(id)a2;

@end
