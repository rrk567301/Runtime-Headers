@class SIRINLUEXTERNALNLU_ROUTERCustom;

@interface SIRINLUEXTERNALNLU_ROUTERTypeIdentifier : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCustom;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERCustom *custom;

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
