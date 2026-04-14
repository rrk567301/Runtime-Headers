@class NTPBPaywallDescription;

@interface NTPBPublisherPaidDescriptionStrings : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPaywallDescription;
@property (retain, nonatomic) NTPBPaywallDescription *paywallDescription;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
