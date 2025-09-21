@class SIRINLUEXTERNALUsoGraph, SIRINLUEXTERNALUUID;

@interface SIRINLUEXTERNALUserWantedToRepeat : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasSystemDialogActId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *systemDialogActId;
@property (readonly, nonatomic) char hasReference;
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *reference;

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
