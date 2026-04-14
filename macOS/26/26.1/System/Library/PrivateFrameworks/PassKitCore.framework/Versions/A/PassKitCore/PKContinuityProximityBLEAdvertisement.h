@class NSString;

@interface PKContinuityProximityBLEAdvertisement : PKContinuityProximityAdvertisement

@property (readonly, nonatomic) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (id)initWithIdentifier:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
