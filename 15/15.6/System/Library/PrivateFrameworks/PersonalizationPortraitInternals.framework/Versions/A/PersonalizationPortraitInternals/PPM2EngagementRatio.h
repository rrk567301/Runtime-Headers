@class NSString;

@interface PPM2EngagementRatio : PBCodable <NSCopying> {
    struct { unsigned char domain : 1; unsigned char engagedCount : 1; unsigned char evaluatedCount : 1; unsigned char k : 1; unsigned char offeredCount : 1; unsigned char rejectedCount : 1; } _has;
}

@property (nonatomic) char hasK;
@property (nonatomic) unsigned int k;
@property (nonatomic) char hasEvaluatedCount;
@property (nonatomic) unsigned int evaluatedCount;
@property (nonatomic) char hasEngagedCount;
@property (nonatomic) unsigned int engagedCount;
@property (nonatomic) char hasRejectedCount;
@property (nonatomic) unsigned int rejectedCount;
@property (nonatomic) char hasDomain;
@property (nonatomic) int domain;
@property (readonly, nonatomic) char hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;
@property (nonatomic) char hasOfferedCount;
@property (nonatomic) unsigned int offeredCount;
@property (readonly, nonatomic) char hasMappingId;
@property (retain, nonatomic) NSString *mappingId;

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
- (int)StringAsDomain:(id)a0;
- (id)domainAsString:(int)a0;

@end
