@class NSData, NSMutableArray;

@interface CKDPMergeableDeltaMetadataRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *metadatas;
@property (readonly, nonatomic) BOOL hasContinuation;
@property (retain, nonatomic) NSData *continuation;

+ (Class)metadataType;

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
- (void)addMetadata:(id)a0;
- (void)clearMetadatas;
- (unsigned long long)metadatasCount;
- (id)metadataAtIndex:(unsigned long long)a0;

@end
