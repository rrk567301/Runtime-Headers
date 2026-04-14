@class NSData, NSMutableArray;

@interface CKDPMergeableDeltaMetadataRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *metadatas;
@property (readonly, nonatomic) BOOL hasContinuation;
@property (retain, nonatomic) NSData *continuation;

+ (Class)metadataType;

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
- (void)addMetadata:(id)a0;
- (void)clearMetadatas;
- (id)metadataAtIndex:(unsigned long long)a0;
- (unsigned long long)metadatasCount;

@end
