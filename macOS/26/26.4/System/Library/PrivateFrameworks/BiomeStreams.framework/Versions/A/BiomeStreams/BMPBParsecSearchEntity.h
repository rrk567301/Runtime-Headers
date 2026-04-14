@class NSString, NSMutableArray;

@interface BMPBParsecSearchEntity : PBCodable <NSCopying> {
    struct { unsigned char category : 1; unsigned char probabilityScore : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) unsigned int category;
@property (nonatomic) BOOL hasProbabilityScore;
@property (nonatomic) float probabilityScore;
@property (retain, nonatomic) NSMutableArray *topics;

+ (Class)topicsType;

- (unsigned long long)topicsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addTopics:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (id)topicsAtIndex:(unsigned long long)a0;
- (void)clearTopics;

@end
