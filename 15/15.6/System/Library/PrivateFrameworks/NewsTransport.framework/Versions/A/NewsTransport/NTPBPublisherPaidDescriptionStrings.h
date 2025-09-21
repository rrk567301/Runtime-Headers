@class NTPBPaywallDescription;

@interface NTPBPublisherPaidDescriptionStrings : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasPaywallDescription;
@property (retain, nonatomic) NTPBPaywallDescription *paywallDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
