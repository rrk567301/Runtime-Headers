@class NSString;

@interface SnapshotFetchOperation : WBSSiteMetadataFetchOperation <SiteMetadataFetcherClient> {
    id /* block */ _completionHandler;
    struct RefPtr<Safari::SiteMetadataFetcher, WTF::RawPtrTraits<Safari::SiteMetadataFetcher>, WTF::DefaultRefDerefTraits<Safari::SiteMetadataFetcher>> { struct SiteMetadataFetcher *m_ptr; } _fetcher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0;
- (void)start;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_startOffscreenSnapshotRequest;
- (void)didReceiveSiteMetadataResponse:(id)a0 toRequest:(id)a1;

@end
