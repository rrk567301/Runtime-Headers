@class SIRINLUEXTERNALUsoGraph, SIRINLUEXTERNALUUID;

@interface SIRINLUEXTERNALSystemReportedFailure : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTaskId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *taskId;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *reason;
@property (readonly, nonatomic) BOOL hasTask;
@property (retain, nonatomic) SIRINLUEXTERNALUsoGraph *task;

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
