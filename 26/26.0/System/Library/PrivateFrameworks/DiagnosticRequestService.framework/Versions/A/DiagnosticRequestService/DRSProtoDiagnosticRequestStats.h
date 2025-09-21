@class NSString, NSMutableArray;

@interface DRSProtoDiagnosticRequestStats : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBuild;
@property (retain, nonatomic) NSString *build;
@property (readonly, nonatomic) BOOL hasTeamId;
@property (retain, nonatomic) NSString *teamId;
@property (readonly, nonatomic) BOOL hasIssueCategory;
@property (retain, nonatomic) NSString *issueCategory;
@property (readonly, nonatomic) BOOL hasIssueDescription;
@property (retain, nonatomic) NSString *issueDescription;
@property (retain, nonatomic) NSMutableArray *outcomes;

+ (Class)outcomesType;

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
- (void)addOutcomes:(id)a0;
- (void)clearOutcomes;
- (id)outcomesAtIndex:(unsigned long long)a0;
- (unsigned long long)outcomesCount;

@end
