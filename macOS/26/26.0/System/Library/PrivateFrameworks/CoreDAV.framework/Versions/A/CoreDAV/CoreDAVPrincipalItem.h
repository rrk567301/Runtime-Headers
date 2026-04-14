@class CoreDAVItemWithNoChildren, CoreDAVHrefItem, CoreDAVItem;

@interface CoreDAVPrincipalItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVHrefItem *href;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *all;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *authenticated;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;
@property (retain, nonatomic) CoreDAVItem *property;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *selfItem;

+ (id)copyParseRules;

- (id)init;
- (id)hashString;
- (id)description;
- (void)write:(id)a0;
- (void).cxx_destruct;
- (id)initTypeIsHREFWithURL:(id)a0;
- (id)initTypeIsAll;
- (id)initTypeIsAuthenticated;
- (id)initTypeIsProperty:(id)a0;
- (id)initTypeIsSelf;
- (id)initTypeIsUnauthenticated;

@end
