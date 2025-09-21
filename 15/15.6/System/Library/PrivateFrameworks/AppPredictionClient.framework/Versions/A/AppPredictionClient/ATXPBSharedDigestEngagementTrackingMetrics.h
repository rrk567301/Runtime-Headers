@class NSString;

@interface ATXPBSharedDigestEngagementTrackingMetrics : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char numDigestExpansions : 1; unsigned char numEngagementsAfterExpiration : 1; unsigned char numEngagementsInScheduled : 1; unsigned char numEngagementsInUpcoming : 1; unsigned char numExpansions : 1; unsigned char sectionPosition : 1; unsigned char sectionSize : 1; } _has;
}

@property (nonatomic) char hasNumEngagementsInUpcoming;
@property (nonatomic) unsigned long long numEngagementsInUpcoming;
@property (nonatomic) char hasNumEngagementsInScheduled;
@property (nonatomic) unsigned long long numEngagementsInScheduled;
@property (nonatomic) char hasNumEngagementsAfterExpiration;
@property (nonatomic) unsigned long long numEngagementsAfterExpiration;
@property (nonatomic) char hasNumExpansions;
@property (nonatomic) unsigned long long numExpansions;
@property (readonly, nonatomic) char hasSectionIdentifier;
@property (retain, nonatomic) NSString *sectionIdentifier;
@property (nonatomic) char hasSectionPosition;
@property (nonatomic) unsigned long long sectionPosition;
@property (nonatomic) char hasSectionSize;
@property (nonatomic) unsigned long long sectionSize;
@property (nonatomic) char hasNumDigestExpansions;
@property (nonatomic) unsigned long long numDigestExpansions;

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
- (id)jsonRepresentation;
- (id)initFromJSON:(id)a0;

@end
