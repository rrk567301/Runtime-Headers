@class NSString;

@interface HDCodableMedicalUserDomainConcept : PBCodable <NSCopying> {
    struct { long long *list; unsigned long long count; unsigned long long size; } _categoryTypes;
}

@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) unsigned long long categoryTypesCount;
@property (readonly, nonatomic) long long *categoryTypes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (void)addCategoryTypes:(long long)a0;
- (long long)categoryTypesAtIndex:(unsigned long long)a0;
- (void)clearCategoryTypes;
- (void)setCategoryTypes:(long long *)a0 count:(unsigned long long)a1;

@end
