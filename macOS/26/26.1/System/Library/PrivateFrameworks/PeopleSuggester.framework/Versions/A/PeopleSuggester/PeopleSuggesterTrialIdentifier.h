@class NSString;

@interface PeopleSuggesterTrialIdentifier : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTask;
@property (retain, nonatomic) NSString *task;
@property (readonly, nonatomic) BOOL hasTreatment;
@property (retain, nonatomic) NSString *treatment;
@property (readonly, nonatomic) BOOL hasDeployment;
@property (retain, nonatomic) NSString *deployment;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
