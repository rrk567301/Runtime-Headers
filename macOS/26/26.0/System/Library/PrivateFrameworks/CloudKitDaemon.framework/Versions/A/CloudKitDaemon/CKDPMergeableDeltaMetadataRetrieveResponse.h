@class NSData, NSMutableArray;

@interface CKDPMergeableDeltaMetadataRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *metadatas;
@property (readonly, nonatomic) BOOL hasContinuation;
@property (retain, nonatomic) NSData *continuation;

+ (Class)metadataType;

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
- (void)addMetadata:(id)a0;
- (void)clearMetadatas;
- (id)metadataAtIndex:(unsigned long long)a0;
- (unsigned long long)metadatasCount;

@end
