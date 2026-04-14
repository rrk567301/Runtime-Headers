@class NSMutableArray;

@interface HDCodableOntologyLocalizedEducationContentSection : PBCodable <NSCopying> {
    struct { unsigned char sectionType : 1; } _has;
}

@property (nonatomic) BOOL hasSectionType;
@property (nonatomic) long long sectionType;
@property (retain, nonatomic) NSMutableArray *sectionDatas;

+ (Class)sectionDataType;

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
- (void)addSectionData:(id)a0;
- (void)clearSectionDatas;
- (id)sectionDataAtIndex:(unsigned long long)a0;
- (unsigned long long)sectionDatasCount;

@end
