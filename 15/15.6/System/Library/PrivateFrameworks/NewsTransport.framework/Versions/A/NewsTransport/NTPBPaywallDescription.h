@class NSString;

@interface NTPBPaywallDescription : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasChannelPaywall;
@property (retain, nonatomic) NSString *channelPaywall;
@property (readonly, nonatomic) char hasLeakyPaywall;
@property (retain, nonatomic) NSString *leakyPaywall;
@property (readonly, nonatomic) char hasPromotionalPaywall;
@property (retain, nonatomic) NSString *promotionalPaywall;
@property (readonly, nonatomic) char hasHardPaywall;
@property (retain, nonatomic) NSString *hardPaywall;

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
