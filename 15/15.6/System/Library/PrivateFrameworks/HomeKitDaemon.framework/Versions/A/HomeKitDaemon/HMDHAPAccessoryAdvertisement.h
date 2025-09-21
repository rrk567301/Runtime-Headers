@class NSData;

@interface HMDHAPAccessoryAdvertisement : HMDAccessoryAdvertisement

@property (readonly, nonatomic) char pairingPresent;
@property (retain, nonatomic) NSData *setupHash;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 categoryIdentifier:(id)a2 pairingPresent:(char)a3 setupHash:(id)a4;

@end
