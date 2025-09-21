@class NSString, NSView, NSMutableSet, WebDataSource, NSMutableArray;

@interface WebPluginController : NSObject <WebPluginManualLoader, WebPluginContainerCheckController> {
    NSView *_documentView;
    WebDataSource *_dataSource;
    NSMutableArray *_views;
    BOOL _started;
    NSMutableSet *_checksInProgress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPlugInView:(id)a0;

- (id)webView;
- (void)dealloc;
- (void)setDataSource:(id)a0;
- (id)selectionColor;
- (id)webFrame;
- (id)initWithDocumentView:(id)a0;
- (id)URLPolicyCheckReferrer;
- (void)_cancelOutstandingChecks;
- (void)startAllPlugins;
- (void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)a0;
- (id)_webPluginContainerCheckIfAllowedToLoadRequest:(id)a0 inFrame:(id)a1 resultObject:(id)a2 selector:(SEL)a3;
- (void)addPlugin:(id)a0;
- (void)destroyAllPlugins;
- (void)destroyOnePlugin:(id)a0;
- (void)destroyPlugin:(id)a0;
- (id)plugInViewWithArguments:(id)a0 fromPluginPackage:(id)a1;
- (void)pluginView:(id)a0 receivedData:(id)a1;
- (void)pluginView:(id)a0 receivedError:(id)a1;
- (void)pluginView:(id)a0 receivedResponse:(id)a1;
- (void)pluginViewFinishedLoading:(id)a0;
- (void)showStatus:(id)a0;
- (void)stopAllPlugins;
- (void)stopOnePlugin:(id)a0;
- (void)webPlugInContainerLoadRequest:(id)a0 inFrame:(id)a1;
- (id)webPlugInContainerSelectionColor;
- (void)webPlugInContainerShowStatus:(id)a0;

@end
