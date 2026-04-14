@class NTPBPaywallDescription;

@interface NTPBPublisherPaidDescriptionStrings : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPaywallDescription;
@property (retain, nonatomic) NTPBPaywallDescription *paywallDescription;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)mergeFrom:(id)a0;

@end
