@class SIRINLUEXTERNALNLU_ROUTERApp;

@interface SIRINLUEXTERNALNLU_ROUTERPrimitiveValue : PBCodable <NSCopying> {
    struct { unsigned char boolValue : 1; } _has;
}

@property (nonatomic) char hasBoolValue;
@property (nonatomic) char boolValue;
@property (readonly, nonatomic) char hasApp;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERApp *app;

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

@end
