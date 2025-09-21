@class NSString;

@interface TPPBPolicyProhibits : PBCodable <NSCopying> {
    struct { unsigned char policyVersion : 1; } _has;
}

@property (nonatomic) char hasPolicyVersion;
@property (nonatomic) unsigned long long policyVersion;
@property (readonly, nonatomic) char hasSponsorId;
@property (retain, nonatomic) NSString *sponsorId;
@property (readonly, nonatomic) char hasSponsorCategory;
@property (retain, nonatomic) NSString *sponsorCategory;
@property (readonly, nonatomic) char hasCandidateCategory;
@property (retain, nonatomic) NSString *candidateCategory;
@property (readonly, nonatomic) char hasExplanation;
@property (retain, nonatomic) NSString *explanation;

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
