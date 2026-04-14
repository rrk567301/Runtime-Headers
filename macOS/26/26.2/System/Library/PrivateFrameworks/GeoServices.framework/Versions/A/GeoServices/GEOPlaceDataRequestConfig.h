@class NSNumber, GEOPDPlaceRequest;

@interface GEOPlaceDataRequestConfig : GEOServiceRequestDefaultConfig {
    double _timeout;
    unsigned long long _urlType;
    NSNumber *_requestPriority;
    unsigned long long _multipathServiceType;
    GEOPDPlaceRequest *_placeRequest;
    BOOL _usesBackgroundURL;
}

- (BOOL)usesBackgroundURL;
- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKindForRequest:(id)a0 traits:(id)a1;
- (double)timeout;
- (id)serviceTypeNumber;
- (id)additionalHTTPHeaders;
- (void).cxx_destruct;
- (id)initWithTimeout:(double)a0 request:(id)a1 traits:(id)a2;
- (unsigned long long)multipathServiceType;
- (id)additionalStatesForNetworkEvent;
- (unsigned long long)urlType;

@end
