@class NSArray, NSMutableDictionary;

@interface CPLDerivativesFilter : NSObject <NSSecureCoding> {
    NSMutableDictionary *_skipInfoForAssetChange;
    NSMutableDictionary *_skipInfoForMasterChange;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *plistDescription;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (void)reset;
- (char)addServerDropDerivativesRecipe:(id)a0;
- (id)_descriptionForStoredResponse:(id)a0 recordType:(unsigned long long)a1;
- (void)_enumerateDropDerivativeRules:(id)a0 ofType:(unsigned long long)a1 withBlock:(id /* block */)a2;
- (id)_getTargetDictionaryForChangeType:(unsigned long long)a0;
- (char)_isValidDropDerivativeRecipeWithUTI:(id)a0 sourceType:(unsigned long long)a1 derivativeTypes:(id)a2 changeType:(unsigned long long)a3;
- (char)addServerDropDerivativesRecipes:(id)a0;
- (void)enumerateDropDerivativeRulesWithBlock:(id /* block */)a0;
- (char)mightDropSomeDerivativesForSourceType:(unsigned long long)a0 forChangeType:(unsigned long long)a1;
- (char)shouldDropDerivativeWithDropDerivativeRecipe:(id)a0;

@end
