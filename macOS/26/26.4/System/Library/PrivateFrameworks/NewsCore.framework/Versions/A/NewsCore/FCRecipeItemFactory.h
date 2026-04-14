@class FCRecipeRecordSource, NSArray;

@interface FCRecipeItemFactory : NSObject <FCRecipeItemFactoryType>

@property (readonly, nonatomic) FCRecipeRecordSource *recipeRecordSource;
@property (readonly, nonatomic) NSArray *requiredRecipeKeys;

- (void).cxx_destruct;
- (id)initWithRecipeRecordSource:(id)a0;
- (id)recipeItemFromCKRecord:(id)a0 surfacedBy:(id)a1 order:(long long)a2 error:(id *)a3;
- (id)recipeItemFromPBRecord:(id)a0 surfacedBy:(id)a1 order:(long long)a2 error:(id *)a3;

@end
