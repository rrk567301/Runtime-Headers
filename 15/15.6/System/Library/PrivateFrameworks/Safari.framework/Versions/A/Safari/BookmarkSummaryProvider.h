@class NSString, WebKitPreferencesManager;
@protocol WBSSiteMetadataProviderDelegate;

@interface BookmarkSummaryProvider : NSObject <WBSSiteMetadataProvider> {
    struct Context { struct WKRetainPtr<const void *> { void *m_ptr; } m_webKit2Object; } _context;
    WebKitPreferencesManager *_preferencesManager;
}

@property (weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;
@property (readonly, nonatomic) char providesFavicons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (char)canHandleRequest:(id)a0;
- (id)initWithProcessContext:(const void *)a0 preferencesManager:(id)a1;
- (void)prepareResponseForRequest:(id)a0 allowDelayedResponse:(char)a1;
- (id)responseForRequest:(id)a0 willProvideUpdates:(char *)a1;

@end
