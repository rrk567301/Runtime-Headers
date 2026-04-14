@class WebNavigationDataPrivate;

@interface WebNavigationData : NSObject {
    WebNavigationDataPrivate *_private;
}

- (id)response;
- (id)originalRequest;
- (void)dealloc;
- (id)url;
- (id)title;
- (id)clientRedirectSource;
- (BOOL)hasSubstituteData;
- (id)initWithURLString:(id)a0 title:(id)a1 originalRequest:(id)a2 response:(id)a3 hasSubstituteData:(BOOL)a4 clientRedirectSource:(id)a5;

@end
