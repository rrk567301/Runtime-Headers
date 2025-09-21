@class NSString;

@interface TRITrialBMLTFields : PBCodable <NSCopying> {
    struct { unsigned char clientBmltTargetingRuleGroupOrdinal : 1; } _has;
}

@property (readonly, nonatomic) char hasClientBmltId;
@property (retain, nonatomic) NSString *clientBmltId;
@property (readonly, nonatomic) char hasClientBmltFactorPackSetId;
@property (retain, nonatomic) NSString *clientBmltFactorPackSetId;
@property (nonatomic) char hasClientBmltTargetingRuleGroupOrdinal;
@property (nonatomic) int clientBmltTargetingRuleGroupOrdinal;

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
