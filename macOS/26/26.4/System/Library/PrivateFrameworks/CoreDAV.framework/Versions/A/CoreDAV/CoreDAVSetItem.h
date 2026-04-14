@class CoreDAVItem;

@interface CoreDAVSetItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *prop;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
