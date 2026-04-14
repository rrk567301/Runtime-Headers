@class NSData, NSMutableArray;

@interface CKDPAtomBatchMetadataRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *metadatas;
@property (readonly, nonatomic) BOOL hasContinuation;
@property (retain, nonatomic) NSData *continuation;

+ (Class)metadataType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)addMetadata:(id)a0;
- (unsigned long long)metadatasCount;
- (void)clearMetadatas;
- (id)metadataAtIndex:(unsigned long long)a0;

@end
