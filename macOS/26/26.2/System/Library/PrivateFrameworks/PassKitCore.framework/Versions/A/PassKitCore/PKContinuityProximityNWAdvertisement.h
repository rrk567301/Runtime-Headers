@class NSString;

@interface PKContinuityProximityNWAdvertisement : PKContinuityProximityAdvertisement

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *pin;

+ (BOOL)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0 pin:(id)a1;

@end
