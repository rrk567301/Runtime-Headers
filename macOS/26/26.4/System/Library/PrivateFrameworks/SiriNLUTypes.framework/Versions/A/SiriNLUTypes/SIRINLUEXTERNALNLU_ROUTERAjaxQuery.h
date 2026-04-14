@class SIRINLUEXTERNALNLU_ROUTERExplicit, SIRINLUEXTERNALNLU_ROUTERImplicit;

@interface SIRINLUEXTERNALNLU_ROUTERAjaxQuery : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasExplicitQuery;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERExplicit *explicitQuery;
@property (readonly, nonatomic) BOOL hasImplicitQuery;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERImplicit *implicitQuery;

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
