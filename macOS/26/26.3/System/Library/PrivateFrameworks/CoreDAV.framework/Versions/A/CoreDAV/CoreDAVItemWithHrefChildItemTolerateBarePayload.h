@class NSURL, CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItemTolerateBarePayload : CoreDAVItemWithHrefChildItem {
    CoreDAVHrefItem *_virtualHref;
    NSURL *_baseURL;
}

- (void)setPayload:(id)a0;
- (void)parserSuggestsBaseURL:(id)a0;
- (id)description;
- (id)href;
- (void).cxx_destruct;

@end
