@class SIRINLUEXTERNALNLU_ROUTERExplicit, SIRINLUEXTERNALNLU_ROUTERImplicit;

@interface SIRINLUEXTERNALNLU_ROUTERAjaxQuery : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasExplicitQuery;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERExplicit *explicitQuery;
@property (readonly, nonatomic) BOOL hasImplicitQuery;
@property (retain, nonatomic) SIRINLUEXTERNALNLU_ROUTERImplicit *implicitQuery;

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

@end
