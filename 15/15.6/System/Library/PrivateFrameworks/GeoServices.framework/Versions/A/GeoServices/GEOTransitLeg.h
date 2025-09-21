@class PBUnknownFields;

@interface GEOTransitLeg : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { int *list; unsigned long long count; unsigned long long size; } _restrictedToSectionIndexs;
    int _sectionOptionIndex;
    struct { unsigned char has_sectionOptionIndex : 1; } _flags;
}

@property (nonatomic) char hasSectionOptionIndex;
@property (nonatomic) int sectionOptionIndex;
@property (readonly, nonatomic) unsigned long long restrictedToSectionIndexsCount;
@property (readonly, nonatomic) int *restrictedToSectionIndexs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addRestrictedToSectionIndex:(int)a0;
- (void)clearRestrictedToSectionIndexs;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (int)restrictedToSectionIndexAtIndex:(unsigned long long)a0;
- (void)setRestrictedToSectionIndexs:(int *)a0 count:(unsigned long long)a1;

@end
