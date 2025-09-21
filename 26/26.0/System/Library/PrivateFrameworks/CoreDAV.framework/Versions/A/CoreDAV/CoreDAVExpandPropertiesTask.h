@class NSMutableSet;

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask

@property (retain, nonatomic) NSMutableSet *propertiesToExpand;

- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)httpMethod;
- (id)parseHints;
- (void)addPropertyToExpandWithPropertiesToFind:(id)a0 expandedName:(id)a1 expandedNameSpace:(id)a2;
- (id)description;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1 expandedName:(id)a2 expandedNameSpace:(id)a3;
- (void).cxx_destruct;

@end
