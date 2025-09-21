@class SIRINLUEXTERNALUsoGraph, SIRINLUEXTERNALUUID, SIRICOMMONDoubleValue;

@interface SIRINLUEXTERNALTask : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasTaskId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *taskId;
@property (readonly, nonatomic) char hasTask;
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *task;
@property (readonly, nonatomic) char hasScore;
@property (retain, nonatomic) SIRICOMMONDoubleValue *score;

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
