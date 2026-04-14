@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVItemWithHrefChildren : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *hrefs;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (id)description;
- (void).cxx_destruct;
- (id)hrefsAsOriginalURLs;
- (id)hrefsAsFullURLs;
- (void)addHref:(id)a0;
- (id)hrefsAsStrings;

@end
