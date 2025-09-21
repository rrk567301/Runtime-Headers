@class NSMutableArray, SIRINLUEXTERNALNLU_ROUTERTypedValue;

@interface SIRINLUEXTERNALNLU_ROUTERSpanMatchedEntity : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasTypedValue;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERTypedValue *typedValue;
@property (retain, nonatomic) NSMutableArray *matchMetadatas;

+ (Class)matchMetadataType;

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
- (void)addMatchMetadata:(id)a0;
- (void)clearMatchMetadatas;
- (id)matchMetadataAtIndex:(unsigned long long)a0;
- (unsigned long long)matchMetadatasCount;

@end
