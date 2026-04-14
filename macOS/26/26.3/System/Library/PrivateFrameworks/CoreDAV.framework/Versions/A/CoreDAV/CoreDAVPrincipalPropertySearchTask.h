@class NSSet, NSDictionary;

@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask

@property (retain, nonatomic) NSSet *searchItems;
@property (retain, nonatomic) NSDictionary *extraAttributes;
@property (nonatomic) BOOL applyToPrincipalCollectionSet;

- (id)requestBody;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)httpMethod;
- (id)initWithPropertySearches:(id)a0 propertiesToFind:(id)a1 atURL:(id)a2 applyToPrincipalCollectionSet:(BOOL)a3 extraAttributes:(id)a4;
- (void).cxx_destruct;

@end
