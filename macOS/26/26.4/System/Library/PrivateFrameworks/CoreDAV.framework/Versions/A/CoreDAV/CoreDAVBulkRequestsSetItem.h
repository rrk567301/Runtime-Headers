@class NSDictionary, CoreDAVBulkRequestsItem;

@interface CoreDAVBulkRequestsSetItem : CoreDAVItem

@property (readonly, nonatomic) NSDictionary *dictRepresentation;
@property (retain, nonatomic) CoreDAVBulkRequestsItem *crudItem;
@property (retain, nonatomic) CoreDAVBulkRequestsItem *simpleItem;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
