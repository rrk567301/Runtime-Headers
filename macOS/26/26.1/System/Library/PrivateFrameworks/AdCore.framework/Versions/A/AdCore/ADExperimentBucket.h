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

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
