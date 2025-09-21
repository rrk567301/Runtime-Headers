@class NSString;

@interface TRITrialRolloutFields : PBCodable <NSCopying> {
    struct { unsigned char clientTargetingRuleGroupOrdinal : 1; } _has;
}

@property (readonly, nonatomic) char hasClientRolloutId;
@property (retain, nonatomic) NSString *clientRolloutId;
@property (readonly, nonatomic) char hasClientFactorPackSetId;
@property (retain, nonatomic) NSString *clientFactorPackSetId;
@property (readonly, nonatomic) char hasClientRampId;
@property (retain, nonatomic) NSString *clientRampId;
@property (nonatomic) char hasClientTargetingRuleGroupOrdinal;
@property (nonatomic) int clientTargetingRuleGroupOrdinal;

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
