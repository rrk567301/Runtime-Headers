@class NSSet, NSDictionary;

@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask

@property (retain, nonatomic) NSSet *searchItems;
@property (retain, nonatomic) NSDictionary *extraAttributes;
@property (nonatomic) char applyToPrincipalCollectionSet;

- (void).cxx_destruct;
- (id)requestBody;
- (id)httpMethod;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)initWithPropertySearches:(id)a0 propertiesToFind:(id)a1 atURL:(id)a2 applyToPrincipalCollectionSet:(char)a3 extraAttributes:(id)a4;

@end
