@class NSString;

@interface PKSharingExternalInvitationRequestMessage : PKSharingGenericMessage

@property (readonly, nonatomic) NSString *sharingSessionIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)configureWithContent:(id)a0;
- (id)initWithSharingSessionIdentifier:(id)a0;

@end
