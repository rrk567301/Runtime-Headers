@class NSString, NSMutableArray;

@interface DRSProtoDiagnosticRequestStats : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasBuild;
@property (retain, nonatomic) NSString *build;
@property (readonly, nonatomic) char hasTeamId;
@property (retain, nonatomic) NSString *teamId;
@property (readonly, nonatomic) char hasIssueCategory;
@property (retain, nonatomic) NSString *issueCategory;
@property (readonly, nonatomic) char hasIssueDescription;
@property (retain, nonatomic) NSString *issueDescription;
@property (retain, nonatomic) NSMutableArray *outcomes;

+ (Class)outcomesType;

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
- (void)addOutcomes:(id)a0;
- (void)clearOutcomes;
- (id)outcomesAtIndex:(unsigned long long)a0;
- (unsigned long long)outcomesCount;

@end
