@class NSString, NSArray, NSData;

@interface NLXSchemaSSUBackgroundUpdateAppInfo : SISchemaInstrumentationMessage {
    struct { unsigned char numCacheFilesRemoved : 1; } _has;
}

@property (copy, nonatomic) NSString *appBundleIdSaltedHash;
@property (nonatomic) char hasAppBundleIdSaltedHash;
@property (nonatomic) unsigned int numCacheFilesRemoved;
@property (nonatomic) char hasNumCacheFilesRemoved;
@property (copy, nonatomic) NSArray *categoryInfos;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addCategoryInfos:(id)a0;
- (id)categoryInfosAtIndex:(unsigned long long)a0;
- (unsigned long long)categoryInfosCount;
- (void)clearCategoryInfos;
- (void)deleteAppBundleIdSaltedHash;
- (void)deleteCategoryInfos;
- (void)deleteNumCacheFilesRemoved;
- (id)suppressMessageUnderConditions;

@end
