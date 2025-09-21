@class NSString;

@interface ADExperimentBucket : PBCodable <NSCopying> {
    struct { unsigned char bucketId : 1; unsigned char generation : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBucketNamespace;
@property (retain, nonatomic) NSString *bucketNamespace;
@property (nonatomic) BOOL hasBucketId;
@property (nonatomic) int bucketId;
@property (nonatomic) BOOL hasGeneration;
@property (nonatomic) int generation;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
