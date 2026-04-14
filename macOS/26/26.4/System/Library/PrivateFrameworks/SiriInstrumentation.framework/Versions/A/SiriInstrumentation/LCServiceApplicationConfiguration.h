@class NSString, NSArray, NSData, LCServiceLoggingParameters;

@interface LCServiceApplicationConfiguration : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL hasBundleIdentifier;
@property (retain, nonatomic) LCServiceLoggingParameters *applicationParameters;
@property (nonatomic) BOOL hasApplicationParameters;
@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) NSArray *blacklistedCategories;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (void)clearCategories;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)categoriesAtIndex:(unsigned long long)a0;
- (void)addCategories:(id)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)categoriesCount;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addBlacklistedCategories:(int)a0;
- (int)blacklistedCategoriesAtIndex:(unsigned long long)a0;
- (unsigned long long)blacklistedCategoriesCount;
- (void)clearBlacklistedCategories;
- (void)deleteApplicationParameters;
- (void)deleteBlacklistedCategories;
- (void)deleteBundleIdentifier;
- (void)deleteCategories;

@end
