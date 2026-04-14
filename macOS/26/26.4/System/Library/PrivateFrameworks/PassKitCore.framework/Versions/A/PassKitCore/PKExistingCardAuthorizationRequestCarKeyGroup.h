@class NSString;

@interface PKExistingCardAuthorizationRequestCarKeyGroup : PKExistingCardAuthorizationRequestGroup

@property (readonly, nonatomic) NSString *passTypeIdentifier;
@property (readonly, nonatomic) NSString *passSerialNumber;
@property (readonly, nonatomic) NSString *personalizedVehicleIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithDict:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithPassTypeIdentifier:(id)a0 passSerialNumber:(id)a1 personalizedVehicleIdentifier:(id)a2;
- (BOOL)isEqualToCarKeyGroup:(id)a0;

@end
