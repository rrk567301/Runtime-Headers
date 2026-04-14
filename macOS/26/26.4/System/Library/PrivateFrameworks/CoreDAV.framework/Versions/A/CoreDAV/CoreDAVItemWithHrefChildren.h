@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVItemWithHrefChildren : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *hrefs;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (id)hrefsAsFullURLs;
- (id)hrefsAsOriginalURLs;
- (void).cxx_destruct;
- (id)description;
- (void)addHref:(id)a0;
- (id)hrefsAsStrings;

@end
