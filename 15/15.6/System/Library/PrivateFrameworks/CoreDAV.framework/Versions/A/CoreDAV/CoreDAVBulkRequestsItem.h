@class NSDictionary, CoreDAVLeafItem, NSMutableSet;

@interface CoreDAVBulkRequestsItem : CoreDAVItem

@property (readonly, nonatomic) NSDictionary *dictRepresentation;
@property (retain, nonatomic) CoreDAVLeafItem *maxResourcesItem;
@property (retain, nonatomic) CoreDAVLeafItem *maxSizeItem;
@property (readonly, nonatomic) NSMutableSet *supportedItems;
@property (readonly, nonatomic) long long maxResources;
@property (readonly, nonatomic) long long maxSize;
@property (readonly, nonatomic) char supportsInsert;
@property (readonly, nonatomic) char supportsUpdate;
@property (readonly, nonatomic) char supportsDelete;

+ (id)copyParseRules;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)supportsItemWithNameSpace:(id)a0 name:(id)a1;
- (void)addSupportedItem:(id)a0;

@end
