@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVItemWithHrefChildren : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *hrefs;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (id)description;
- (id)hrefsAsStrings;
- (id)hrefsAsOriginalURLs;
- (void)addHref:(id)a0;
- (id)hrefsAsFullURLs;
- (void).cxx_destruct;

@end
