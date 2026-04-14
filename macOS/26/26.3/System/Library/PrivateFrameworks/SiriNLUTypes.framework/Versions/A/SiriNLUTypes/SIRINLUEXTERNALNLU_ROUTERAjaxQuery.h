@class SIRINLUEXTERNALNLU_ROUTERExplicit, SIRINLUEXTERNALNLU_ROUTERImplicit;

@interface SIRINLUEXTERNALNLU_ROUTERAjaxQuery : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasExplicitQuery;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERExplicit *explicitQuery;
@property (readonly, nonatomic) BOOL hasImplicitQuery;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERImplicit *implicitQuery;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
