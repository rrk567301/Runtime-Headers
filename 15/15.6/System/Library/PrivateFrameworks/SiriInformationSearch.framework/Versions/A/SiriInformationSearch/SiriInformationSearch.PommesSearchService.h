@class _TtC21SiriInformationSearch14PommesResponse, _TtC21SiriInformationSearch26SearchToolGlobalRequestXPC, NSError, _TtC21SiriInformationSearch22PommesSearchRequestXPC;

@interface SiriInformationSearch.PommesSearchService : _TtCs12_SwiftObject <SiriInformationSearch.PommesSearchOrchestrating> {
    void /* unknown type, empty encoding */ handler;
    void /* unknown type, empty encoding */ instrumentationUtil;
    void /* unknown type, empty encoding */ searchToolHandler;
}

- (void)invalidateWithCachedResponse:(id)a0;
- (void)searchInfiEntityWithRequest:(_TtC21SiriInformationSearch22PommesSearchRequestXPC *)a0 completionHandler:(void (^)(_TtC21SiriInformationSearch14PommesResponse *, NSError *))a1;
- (void)searchToolGlobalSearchWithRequest:(_TtC21SiriInformationSearch26SearchToolGlobalRequestXPC *)a0 completionHandler:(void (^)(_TtC21SiriInformationSearch14PommesResponse *, NSError *))a1;

@end
