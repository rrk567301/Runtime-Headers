@class AMSCB1PURLQueryParams;

@interface AMSCB1PMediaTokenRequestOptions : NSObject {
    BOOL _forceRefresh;
    AMSCB1PURLQueryParams *_additionalQueryParams;
}

- (void).cxx_destruct;
- (id)init;
- (id)_initWithAdditionalQueryParams:(id)a0 forceRefresh:(BOOL)a1;
- (id)initWithAdditionalQueryParams:(id)a0 forceRefresh:(BOOL)a1;

@end
