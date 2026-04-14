@class NSString;

@interface PKSharingInvitationRequestMessage : PKSharingGenericMessage

@property (readonly, nonatomic) NSString *passTypeIdentifier;
@property (readonly, nonatomic) NSString *passSerialNumber;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPassTypeIdentifier:(id)a0 passSerialNumber:(id)a1;
- (BOOL)configureWithContent:(id)a0;

@end
