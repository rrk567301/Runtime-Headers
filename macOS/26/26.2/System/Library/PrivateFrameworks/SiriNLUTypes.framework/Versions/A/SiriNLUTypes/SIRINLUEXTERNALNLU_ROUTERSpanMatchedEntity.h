@class NSMutableArray, SIRINLUEXTERNALNLU_ROUTERTypedValue;

@interface SIRINLUEXTERNALNLU_ROUTERSpanMatchedEntity : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTypedValue;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERTypedValue *typedValue;
@property (retain, nonatomic) NSMutableArray *matchMetadatas;

+ (Class)matchMetadataType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)addMatchMetadata:(id)a0;
- (void)clearMatchMetadatas;
- (id)matchMetadataAtIndex:(unsigned long long)a0;
- (unsigned long long)matchMetadatasCount;

@end
