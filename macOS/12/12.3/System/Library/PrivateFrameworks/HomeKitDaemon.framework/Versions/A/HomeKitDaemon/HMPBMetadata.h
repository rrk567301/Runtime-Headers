@class NSMutableArray;

@interface HMPBMetadata : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int version;
@property (retain, nonatomic) NSMutableArray *hapCharacteristics;
@property (retain, nonatomic) NSMutableArray *hapServices;
@property (retain, nonatomic) NSMutableArray *hapCategories;

+ (Class)hapCharacteristicsType;
+ (Class)hapServicesType;
+ (Class)hapCategoriesType;

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
- (unsigned long long)hapCharacteristicsCount;
- (unsigned long long)hapServicesCount;
- (unsigned long long)hapCategoriesCount;
- (void)addHapCharacteristics:(id)a0;
- (void)addHapServices:(id)a0;
- (void)addHapCategories:(id)a0;
- (void)clearHapCharacteristics;
- (id)hapCharacteristicsAtIndex:(unsigned long long)a0;
- (void)clearHapServices;
- (id)hapServicesAtIndex:(unsigned long long)a0;
- (void)clearHapCategories;
- (id)hapCategoriesAtIndex:(unsigned long long)a0;

@end
