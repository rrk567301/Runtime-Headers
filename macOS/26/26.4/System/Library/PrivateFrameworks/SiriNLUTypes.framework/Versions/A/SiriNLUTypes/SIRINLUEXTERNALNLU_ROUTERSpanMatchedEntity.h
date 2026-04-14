@class NSMutableArray, SIRINLUEXTERNALNLU_ROUTERTypedValue;

@interface SIRINLUEXTERNALNLU_ROUTERSpanMatchedEntity : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTypedValue;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERTypedValue *typedValue;
@property (retain, nonatomic) NSMutableArray *matchMetadatas;

+ (Class)matchMetadataType;

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
- (void)addMatchMetadata:(id)a0;
- (void)clearMatchMetadatas;
- (id)matchMetadataAtIndex:(unsigned long long)a0;
- (unsigned long long)matchMetadatasCount;

@end
