@class CoreDAVLeafItem, CoreDAVItem;

@interface CoreDAVPrincipalSearchPropertyItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *prop;
@property (retain, nonatomic) CoreDAVLeafItem *descriptionItem;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
