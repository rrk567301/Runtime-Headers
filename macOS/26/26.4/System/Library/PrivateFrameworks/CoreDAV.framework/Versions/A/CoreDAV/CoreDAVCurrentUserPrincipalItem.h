@class CoreDAVItemWithNoChildren, CoreDAVHrefItem;

@interface CoreDAVCurrentUserPrincipalItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVHrefItem *href;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
