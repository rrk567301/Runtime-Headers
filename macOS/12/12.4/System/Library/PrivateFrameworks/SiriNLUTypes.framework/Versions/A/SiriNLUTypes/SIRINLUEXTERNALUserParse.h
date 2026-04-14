@class SIRINLUEXTERNALParser, NSString, SIRINLUEXTERNALUUID, NSMutableArray, SIRINLUEXTERNALRepetitionResult;

@interface SIRINLUEXTERNALUserParse : PBCodable <NSCopying> {
    struct { unsigned char comparableProbability : 1; unsigned char probability : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdA;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *idA;
@property (retain, nonatomic) NSMutableArray *userDialogActs;
@property (nonatomic) BOOL hasProbability;
@property (nonatomic) double probability;
@property (readonly, nonatomic) BOOL hasParserId;
@property (retain, nonatomic) NSString *parserId;
@property (readonly, nonatomic) BOOL hasRepetitionResult;
@property (retain, nonatomic) SIRINLUEXTERNALRepetitionResult *repetitionResult;
@property (readonly, nonatomic) BOOL hasParser;
@property (retain, nonatomic) SIRINLUEXTERNALParser *parser;
@property (nonatomic) BOOL hasComparableProbability;
@property (nonatomic) double comparableProbability;

+ (Class)userDialogActsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearUserDialogActs;
- (void)addUserDialogActs:(id)a0;
- (unsigned long long)userDialogActsCount;
- (id)userDialogActsAtIndex:(unsigned long long)a0;

@end
