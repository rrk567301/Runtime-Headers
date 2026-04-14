@class NSMutableArray;

@interface HMPBMetadata : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int version;
@property (retain, nonatomic) NSMutableArray *hapCharacteristics;
@property (retain, nonatomic) NSMutableArray *hapServices;
@property (retain, nonatomic) NSMutableArray *hapCategories;

+ (Class)hapServicesType;
+ (Class)hapCategoriesType;
+ (Class)hapCharacteristicsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addHapServices:(id)a0;
- (void)addHapCategories:(id)a0;
- (void)addHapCharacteristics:(id)a0;
- (void)clearHapCategories;
- (void)clearHapCharacteristics;
- (void)clearHapServices;
- (id)hapCategoriesAtIndex:(unsigned long long)a0;
- (unsigned long long)hapCategoriesCount;
- (id)hapCharacteristicsAtIndex:(unsigned long long)a0;
- (unsigned long long)hapCharacteristicsCount;
- (id)hapServicesAtIndex:(unsigned long long)a0;
- (unsigned long long)hapServicesCount;

@end
