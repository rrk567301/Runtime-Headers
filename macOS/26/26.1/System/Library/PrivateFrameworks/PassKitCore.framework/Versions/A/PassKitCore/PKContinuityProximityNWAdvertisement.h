@class NSString;

@interface PKContinuityProximityNWAdvertisement : PKContinuityProximityAdvertisement

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *pin;

+ (BOOL)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 pin:(id)a1;

@end
