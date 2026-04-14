@class NSData;

@interface NLXSchemaSSUBackgroundUpdateAppCategoryInfo : SISchemaInstrumentationMessage {
    struct { unsigned char categoryType : 1; unsigned char numAppExamplesPositive : 1; unsigned char numAppExamplesNegative : 1; unsigned char cacheAction : 1; } _has;
}

@property (nonatomic) int categoryType;
@property (nonatomic) BOOL hasCategoryType;
@property (nonatomic) unsigned int numAppExamplesPositive;
@property (nonatomic) BOOL hasNumAppExamplesPositive;
@property (nonatomic) unsigned int numAppExamplesNegative;
@property (nonatomic) BOOL hasNumAppExamplesNegative;
@property (nonatomic) int cacheAction;
@property (nonatomic) BOOL hasCacheAction;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteCacheAction;
- (void)deleteCategoryType;
- (void)deleteNumAppExamplesNegative;
- (void)deleteNumAppExamplesPositive;

@end
