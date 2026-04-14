@class NSString, NSDictionary;

@interface PKProvisioningProximitySetupAssistantMessage : PKSharingGenericMessage

@property (readonly, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) NSDictionary *message;
@property (readonly, nonatomic) NSString *conversationIdentifier;
@property (readonly, nonatomic) BOOL isReply;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (BOOL)configureWithContent:(id)a0;
- (id)initWithRequestIdentifier:(id)a0 message:(id)a1 conversationIdentifier:(id)a2 isReply:(BOOL)a3;

@end
