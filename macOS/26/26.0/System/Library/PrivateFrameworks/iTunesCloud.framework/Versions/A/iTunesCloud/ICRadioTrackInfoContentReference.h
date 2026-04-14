@class NSDictionary;

@interface ICRadioTrackInfoContentReference : ICRadioStoreContentReference <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *trackInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStoreIdentifier:(id)a0 trackInfo:(id)a1;
- (id)rawContentDictionaryWithSubscriptionStatus:(id)a0;

@end
