@class NSString;

@interface LIGHTHOUSE_BITACORA_PROTOBMLTIdentifiers : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTrialTaskID;
@property (retain, nonatomic) NSString *trialTaskID;
@property (readonly, nonatomic) BOOL hasTrialDeploymentID;
@property (retain, nonatomic) NSString *trialDeploymentID;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
