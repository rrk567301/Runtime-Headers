@class NSString, NSDictionary;

@interface PKProvisioningProximitySetupAssistantMessage : PKSharingGenericMessage

@property (readonly, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) NSDictionary *message;
@property (readonly, nonatomic) NSString *conversationIdentifier;
@property (readonly, nonatomic) BOOL isReply;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)configureWithContent:(id)a0;
- (id)initWithRequestIdentifier:(id)a0 message:(id)a1 conversationIdentifier:(id)a2 isReply:(BOOL)a3;

@end
