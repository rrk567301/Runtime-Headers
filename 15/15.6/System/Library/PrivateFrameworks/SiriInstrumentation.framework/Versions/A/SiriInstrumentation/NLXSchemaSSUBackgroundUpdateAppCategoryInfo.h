@class NSData;

@interface NLXSchemaSSUBackgroundUpdateAppCategoryInfo : SISchemaInstrumentationMessage {
    struct { unsigned char categoryType : 1; unsigned char numAppExamplesPositive : 1; unsigned char numAppExamplesNegative : 1; unsigned char cacheAction : 1; } _has;
}

@property (nonatomic) int categoryType;
@property (nonatomic) char hasCategoryType;
@property (nonatomic) unsigned int numAppExamplesPositive;
@property (nonatomic) char hasNumAppExamplesPositive;
@property (nonatomic) unsigned int numAppExamplesNegative;
@property (nonatomic) char hasNumAppExamplesNegative;
@property (nonatomic) int cacheAction;
@property (nonatomic) char hasCacheAction;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCacheAction;
- (void)deleteCategoryType;
- (void)deleteNumAppExamplesNegative;
- (void)deleteNumAppExamplesPositive;
- (id)suppressMessageUnderConditions;

@end
