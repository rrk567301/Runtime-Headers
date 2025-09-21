@interface SFPrivacyProxyTraffic : NSObject <NSCopying>

@property (nonatomic) char safariUnencrypted;
@property (nonatomic) char safariDNS;
@property (nonatomic) char safariTrackers;
@property (nonatomic) char safariAll;
@property (nonatomic) char safariHTTP;
@property (nonatomic) char mailTrackers;
@property (nonatomic) char anyUnencrypted;
@property (nonatomic) char anyDNS;
@property (nonatomic) char anyKnownTrackers;
@property (nonatomic) char anyAppTrackers;
@property (nonatomic) char newsURLResolution;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
