@class CoreDAVItem;

@interface CoreDAVSetItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *prop;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
