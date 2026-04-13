@class CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItemTolerateBarePayload : CoreDAVItemWithHrefChildItem {
    CoreDAVHrefItem *_virtualHref;
}

- (id)description;
- (void).cxx_destruct;
- (void)setPayload:(id)a0;
- (id)href;

@end
