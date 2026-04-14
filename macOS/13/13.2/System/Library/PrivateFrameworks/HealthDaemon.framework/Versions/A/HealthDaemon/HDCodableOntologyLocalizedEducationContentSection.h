@class NSMutableArray;

@interface HDCodableOntologyLocalizedEducationContentSection : PBCodable <NSCopying> {
    struct { unsigned char sectionType : 1; } _has;
}

@property (nonatomic) BOOL hasSectionType;
@property (nonatomic) long long sectionType;
@property (retain, nonatomic) NSMutableArray *sectionDatas;

+ (Class)sectionDataType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearSectionDatas;
- (void)addSectionData:(id)a0;
- (unsigned long long)sectionDatasCount;
- (id)sectionDataAtIndex:(unsigned long long)a0;

@end
