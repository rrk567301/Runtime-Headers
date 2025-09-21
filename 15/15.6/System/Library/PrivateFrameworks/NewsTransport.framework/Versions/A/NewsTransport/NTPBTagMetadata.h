@class NTPBContentAndRelevanceInfo;

@interface NTPBTagMetadata : PBCodable <NSCopying> {
    struct { unsigned char flowRate : 1; unsigned char ontologyLevel : 1; unsigned char quality : 1; unsigned char subscriptionRate : 1; } _has;
}

@property (nonatomic) char hasFlowRate;
@property (nonatomic) float flowRate;
@property (nonatomic) char hasSubscriptionRate;
@property (nonatomic) float subscriptionRate;
@property (nonatomic) char hasQuality;
@property (nonatomic) float quality;
@property (nonatomic) char hasOntologyLevel;
@property (nonatomic) int ontologyLevel;
@property (readonly, nonatomic) char hasContentAndRelevanceInfo;
@property (retain, nonatomic) NTPBContentAndRelevanceInfo *contentAndRelevanceInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
