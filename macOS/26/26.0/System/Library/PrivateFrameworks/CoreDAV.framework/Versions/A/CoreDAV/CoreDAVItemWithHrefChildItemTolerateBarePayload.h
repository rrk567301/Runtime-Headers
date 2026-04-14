@class NSURL, CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItemTolerateBarePayload : CoreDAVItemWithHrefChildItem {
    CoreDAVHrefItem *_virtualHref;
    NSURL *_baseURL;
}

- (void)setPayload:(id)a0;
- (id)href;
- (void)parserSuggestsBaseURL:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
