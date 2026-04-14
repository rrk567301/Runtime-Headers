@class NSMutableArray;

@interface CPLSuggestionRecordList : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *assets;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSMutableArray *persons;
@property (retain, nonatomic) NSMutableArray *memorys;

+ (Class)assetType;
+ (Class)personType;
+ (Class)memoryType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addAsset:(id)a0;
- (void)addPerson:(id)a0;
- (unsigned long long)assetsCount;
- (unsigned long long)memorysCount;
- (unsigned long long)personsCount;
- (void)clearAssets;
- (id)assetAtIndex:(unsigned long long)a0;
- (void)addMemory:(id)a0;
- (void)clearPersons;
- (id)personAtIndex:(unsigned long long)a0;
- (void)clearMemorys;
- (id)memoryAtIndex:(unsigned long long)a0;

@end
