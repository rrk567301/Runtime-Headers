@class NSString;

@interface BMPBSiriQueryResult : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; } _has;
}

@property (readonly, nonatomic) char hasQid;
@property (retain, nonatomic) NSString *qid;
@property (readonly, nonatomic) char hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) char hasConfidence;
@property (nonatomic) double confidence;

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
