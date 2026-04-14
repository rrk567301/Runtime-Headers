@class NSURL, CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItemTolerateBarePayload : CoreDAVItemWithHrefChildItem {
    CoreDAVHrefItem *_virtualHref;
    NSURL *_baseURL;
}

- (void)setPayload:(id)a0;
- (id)href;
- (void).cxx_destruct;
- (void)parserSuggestsBaseURL:(id)a0;
- (id)description;

@end
