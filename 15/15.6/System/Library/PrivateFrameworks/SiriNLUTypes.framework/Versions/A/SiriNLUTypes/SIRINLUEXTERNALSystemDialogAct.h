@class SIRINLUEXTERNALUUID, SIRINLUEXTERNALSystemReportedFailure, SIRINLUEXTERNALSystemPrompted, SIRICOMMONStringValue, SIRINLUEXTERNALSystemGaveOptions, SIRINLUEXTERNALSystemOffered, SIRINLUEXTERNALSystemInformed, SIRINLUEXTERNALSystemReportedSuccess;

@interface SIRINLUEXTERNALSystemDialogAct : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasIdA;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *idA;
@property (readonly, nonatomic) char hasPrompted;
@property (retain, nonatomic) SIRINLUEXTERNALSystemPrompted *prompted;
@property (readonly, nonatomic) char hasOffered;
@property (retain, nonatomic) SIRINLUEXTERNALSystemOffered *offered;
@property (readonly, nonatomic) char hasGaveOptions;
@property (retain, nonatomic) SIRINLUEXTERNALSystemGaveOptions *gaveOptions;
@property (readonly, nonatomic) char hasInformed;
@property (retain, nonatomic) SIRINLUEXTERNALSystemInformed *informed;
@property (readonly, nonatomic) char hasReportedSuccess;
@property (retain, nonatomic) SIRINLUEXTERNALSystemReportedSuccess *reportedSuccess;
@property (readonly, nonatomic) char hasReportedFailure;
@property (retain, nonatomic) SIRINLUEXTERNALSystemReportedFailure *reportedFailure;
@property (readonly, nonatomic) char hasRenderedText;
@property (retain, nonatomic) SIRICOMMONStringValue *renderedText;

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
