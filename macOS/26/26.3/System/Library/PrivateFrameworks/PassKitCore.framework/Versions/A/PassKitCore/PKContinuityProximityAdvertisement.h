@interface PKContinuityProximityAdvertisement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;

+ (id)advertisementWithDictionary:(id)a0;

- (id)_dictionaryRepresentation;
- (id)initWithType:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
