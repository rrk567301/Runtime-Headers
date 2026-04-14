@class NSString;

@interface NTPBPaywallDescription : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasChannelPaywall;
@property (retain, nonatomic) NSString *channelPaywall;
@property (readonly, nonatomic) BOOL hasLeakyPaywall;
@property (retain, nonatomic) NSString *leakyPaywall;
@property (readonly, nonatomic) BOOL hasPromotionalPaywall;
@property (retain, nonatomic) NSString *promotionalPaywall;
@property (readonly, nonatomic) BOOL hasHardPaywall;
@property (retain, nonatomic) NSString *hardPaywall;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (void)dealloc;

@end
