@interface CAPContactFillerUserEvent : PBCodable <NSCopying> {
    struct { unsigned char highConfidenceRuleCount : 1; unsigned char lowConfidenceRuleCount : 1; unsigned char mediumConfidenceRuleCount : 1; } _has;
}

@property (nonatomic) unsigned int textInteractionsSent;
@property (nonatomic) unsigned int textInteractionsReceived;
@property (nonatomic) unsigned int shareInteractionsSent;
@property (nonatomic) char hasHighConfidenceRuleCount;
@property (nonatomic) unsigned int highConfidenceRuleCount;
@property (nonatomic) char hasMediumConfidenceRuleCount;
@property (nonatomic) unsigned int mediumConfidenceRuleCount;
@property (nonatomic) char hasLowConfidenceRuleCount;
@property (nonatomic) unsigned int lowConfidenceRuleCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
