@class WebNavigationDataPrivate;

@interface WebNavigationData : NSObject {
    WebNavigationDataPrivate *_private;
}

- (void)dealloc;
- (id)url;
- (id)response;
- (id)title;
- (id)originalRequest;
- (id)clientRedirectSource;
- (char)hasSubstituteData;
- (id)initWithURLString:(id)a0 title:(id)a1 originalRequest:(id)a2 response:(id)a3 hasSubstituteData:(char)a4 clientRedirectSource:(id)a5;

@end
