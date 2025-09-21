@class NSString;

@interface PKContinuityProximityBLEAdvertisement : PKContinuityProximityAdvertisement

@property (readonly, nonatomic) NSString *identifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)_dictionaryRepresentation;
- (void).cxx_destruct;

@end
