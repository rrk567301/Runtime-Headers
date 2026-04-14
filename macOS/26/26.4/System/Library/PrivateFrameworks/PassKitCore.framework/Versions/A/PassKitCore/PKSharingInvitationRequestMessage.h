@class NSString;

@interface PKSharingInvitationRequestMessage : PKSharingGenericMessage

@property (readonly, nonatomic) NSString *passTypeIdentifier;
@property (readonly, nonatomic) NSString *passSerialNumber;
@property (readonly, nonatomic) NSString *personalizedVehicleIdentifier;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)configureWithContent:(id)a0;
- (id)initWithPassTypeIdentifier:(id)a0 passSerialNumber:(id)a1 personalizedVehicleIdentifier:(id)a2;

@end
