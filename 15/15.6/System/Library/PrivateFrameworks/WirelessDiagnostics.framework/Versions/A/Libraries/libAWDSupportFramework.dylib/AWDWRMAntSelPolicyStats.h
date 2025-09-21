@interface AWDWRMAntSelPolicyStats : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char issueBand : 1; unsigned char issueType : 1; unsigned char hasAntConstraint : 1; unsigned char isCoexBand : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasIssueBand;
@property (nonatomic) unsigned int issueBand;
@property (nonatomic) char hasIssueType;
@property (nonatomic) unsigned int issueType;
@property (nonatomic) char hasIsCoexBand;
@property (nonatomic) char isCoexBand;
@property (nonatomic) char hasHasAntConstraint;
@property (nonatomic) char hasAntConstraint;

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
