@class NSString;

@interface PKContinuityProximityBLEAdvertisement : PKContinuityProximityAdvertisement

@property (readonly, nonatomic) NSString *identifier;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)_dictionaryRepresentation;

@end
