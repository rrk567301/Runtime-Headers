@class SIRINLUEXTERNALParser, NSString, SIRINLUEXTERNALCorrectionOutcome, SIRINLUEXTERNALUUID, NSMutableArray, SIRINLUEXTERNALRepetitionResult;

@interface SIRINLUEXTERNALUserParse : PBCodable <NSCopying> {
    struct { unsigned char comparableProbability : 1; unsigned char probability : 1; } _has;
}

@property (readonly, nonatomic) char hasIdA;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *idA;
@property (retain, nonatomic) NSMutableArray *userDialogActs;
@property (nonatomic) char hasProbability;
@property (nonatomic) double probability;
@property (readonly, nonatomic) char hasParserId;
@property (retain, nonatomic) NSString *parserId;
@property (readonly, nonatomic) char hasRepetitionResult;
@property (retain, nonatomic) SIRINLUEXTERNALRepetitionResult *repetitionResult;
@property (readonly, nonatomic) char hasParser;
@property (retain, nonatomic) SIRINLUEXTERNALParser *parser;
@property (nonatomic) char hasComparableProbability;
@property (nonatomic) double comparableProbability;
@property (readonly, nonatomic) char hasCorrectionOutcome;
@property (retain, nonatomic) SIRINLUEXTERNALCorrectionOutcome *correctionOutcome;

+ (Class)userDialogActsType;

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
- (void)addUserDialogActs:(id)a0;
- (void)clearUserDialogActs;
- (id)userDialogActsAtIndex:(unsigned long long)a0;
- (unsigned long long)userDialogActsCount;

@end
