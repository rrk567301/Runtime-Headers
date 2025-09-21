@class NSString;

@interface PKSharingExternalInvitationRequestMessage : PKSharingGenericMessage

@property (readonly, nonatomic) NSString *sharingSessionIdentifier;

+ (char)supportsSecureCoding;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)configureWithContent:(id)a0;
- (id)initWithSharingSessionIdentifier:(id)a0;

@end
