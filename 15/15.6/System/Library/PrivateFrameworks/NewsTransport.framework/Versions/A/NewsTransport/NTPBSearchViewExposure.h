@class NSString;

@interface NTPBSearchViewExposure : PBCodable <NSCopying> {
    struct { unsigned char areaPresentationReason : 1; } _has;
}

@property (nonatomic) char hasAreaPresentationReason;
@property (nonatomic) int areaPresentationReason;
@property (readonly, nonatomic) char hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (readonly, nonatomic) char hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (readonly, nonatomic) char hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsAreaPresentationReason:(id)a0;
- (id)areaPresentationReasonAsString:(int)a0;

@end
