@class NTPBContentAndRelevanceInfo;

@interface NTPBTagMetadata : PBCodable <NSCopying> {
    struct { unsigned char flowRate : 1; unsigned char ontologyLevel : 1; unsigned char quality : 1; unsigned char subscriptionRate : 1; } _has;
}

@property (nonatomic) BOOL hasFlowRate;
@property (nonatomic) float flowRate;
@property (nonatomic) BOOL hasSubscriptionRate;
@property (nonatomic) float subscriptionRate;
@property (nonatomic) BOOL hasQuality;
@property (nonatomic) float quality;
@property (nonatomic) BOOL hasOntologyLevel;
@property (nonatomic) int ontologyLevel;
@property (readonly, nonatomic) BOOL hasContentAndRelevanceInfo;
@property (retain, nonatomic) NTPBContentAndRelevanceInfo *contentAndRelevanceInfo;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
