@class NSString, NSArray, NSData, LCServiceLoggingParameters;

@interface LCServiceApplicationConfiguration : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL hasBundleIdentifier;
@property (retain, nonatomic) LCServiceLoggingParameters *applicationParameters;
@property (nonatomic) BOOL hasApplicationParameters;
@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) NSArray *blacklistedCategories;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addCategories:(id)a0;
- (void)addBlacklistedCategories:(int)a0;
- (void)clearCategories;
- (unsigned long long)categoriesCount;
- (id)categoriesAtIndex:(unsigned long long)a0;
- (void)clearBlacklistedCategories;
- (unsigned long long)blacklistedCategoriesCount;
- (int)blacklistedCategoriesAtIndex:(unsigned long long)a0;

@end
