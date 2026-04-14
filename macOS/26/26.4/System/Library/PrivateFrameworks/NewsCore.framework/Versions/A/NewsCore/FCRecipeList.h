@class NSString, NTPBRecipeListRecord, NSDictionary, FCInterestToken, NSDate, NSArray;

@interface FCRecipeList : NSObject

@property (readonly, nonatomic) NTPBRecipeListRecord *pbRecord;
@property (readonly, nonatomic) FCInterestToken *interestToken;
@property (readonly, nonatomic) NSDictionary *recipeIndicesByID;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, copy, nonatomic) NSArray *recipeIDs;

- (void).cxx_destruct;
- (long long)indexOfRecipeID:(id)a0;
- (id)initWithRecipeListRecord:(id)a0 interestToken:(id)a1;

@end
