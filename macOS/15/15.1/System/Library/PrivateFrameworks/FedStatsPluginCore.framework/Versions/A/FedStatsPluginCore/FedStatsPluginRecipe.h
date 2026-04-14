@class NSString, NSDictionary, NSArray;
@protocol FedStatsPluginAssetProviderProtocol;

@interface FedStatsPluginRecipe : NSObject

@property (readonly, nonatomic) id<FedStatsPluginAssetProviderProtocol> assetProvider;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSDictionary *recordMetadata;
@property (retain, nonatomic) NSDictionary *dataTypeContent;
@property (retain, nonatomic) NSString *sqlQuery;
@property (readonly, nonatomic) NSArray *cohortNameList;

+ (id)recipeWithAssetProvider:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)recordDataArray:(id)a0 metadata:(id)a1 error:(id *)a2;
- (id)initWithAssetProvider:(id)a0 clientIdentifier:(id)a1 recordMetadata:(id)a2 dataTypeContent:(id)a3 sqlQuery:(id)a4 cohortNameList:(id)a5;
- (id)recordDataArray:(id)a0 error:(id *)a1;
- (id)runRecipeWithError:(id *)a0;

@end
