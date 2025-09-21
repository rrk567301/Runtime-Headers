@class SIRINLUEXTERNALUsoGraph, SIRINLUEXTERNALUUID;

@interface SIRINLUEXTERNALUserRejected : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasOfferId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *offerId;
@property (readonly, nonatomic) BOOL hasReference;
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *reference;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
