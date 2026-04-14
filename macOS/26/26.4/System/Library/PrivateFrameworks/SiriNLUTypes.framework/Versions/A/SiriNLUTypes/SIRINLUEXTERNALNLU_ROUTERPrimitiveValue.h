@class SIRINLUEXTERNALNLU_ROUTERApp;

@interface SIRINLUEXTERNALNLU_ROUTERPrimitiveValue : PBCodable <NSCopying> {
    struct { unsigned char boolValue : 1; } _has;
}

@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL boolValue;
@property (readonly, nonatomic) BOOL hasApp;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERApp *app;

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

@end
