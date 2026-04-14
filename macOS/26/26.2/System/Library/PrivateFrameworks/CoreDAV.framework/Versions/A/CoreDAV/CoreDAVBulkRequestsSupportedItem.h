@class CoreDAVItem;

@interface CoreDAVBulkRequestsSupportedItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *supported;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
