@class NSMutableArray;

@interface HDCodableOntologyLocalizedEducationContentSection : PBCodable <NSCopying> {
    struct { unsigned char sectionType : 1; } _has;
}

@property (nonatomic) char hasSectionType;
@property (nonatomic) long long sectionType;
@property (retain, nonatomic) NSMutableArray *sectionDatas;

+ (Class)sectionDataType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addSectionData:(id)a0;
- (void)clearSectionDatas;
- (id)sectionDataAtIndex:(unsigned long long)a0;
- (unsigned long long)sectionDatasCount;

@end
