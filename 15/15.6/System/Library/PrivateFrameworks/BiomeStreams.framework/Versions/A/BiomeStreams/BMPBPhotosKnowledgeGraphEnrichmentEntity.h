@class NSString;

@interface BMPBPhotosKnowledgeGraphEnrichmentEntity : PBCodable <NSCopying> {
    struct { unsigned char score : 1; unsigned char category : 1; } _has;
}

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) char hasScore;
@property (nonatomic) double score;
@property (readonly, nonatomic) char hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) char hasCategory;
@property (nonatomic) unsigned int category;

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

@end
