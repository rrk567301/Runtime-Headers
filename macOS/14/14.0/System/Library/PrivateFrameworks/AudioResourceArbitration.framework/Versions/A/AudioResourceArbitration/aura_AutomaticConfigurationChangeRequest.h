@class NSString, NSArray, AuRA_BoxAcquisitionPreferences, AuRA_InitiationTriggerSpecification, NSDictionary, AuRA_TurnByTurnPortPreferences, AuRA_IOTopology, AuRA_ConfigurationHints, NSNumber;

@interface AuRA_AutomaticConfigurationChangeRequest : AuRA_ConfigurationChangeRequest

@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *mode;
@property (retain, nonatomic) NSDictionary *virtualPortRoutingPolicies;
@property (retain, nonatomic) NSDictionary *virtualPortTypeRoutingPolicies;
@property (retain, nonatomic) NSArray *routableVirtualPorts;
@property (retain, nonatomic) NSArray *unroutableVirtualPorts;
@property (retain, nonatomic) NSNumber *prioritizeSpeakerOverReceiver;
@property (retain, nonatomic) NSNumber *excludeWirelessPorts;
@property (retain, nonatomic) AuRA_IOTopology *supplementingIOTopology;
@property (retain, nonatomic) NSNumber *screenDarkPolicyEnabled;
@property (retain, nonatomic) AuRA_InitiationTriggerSpecification *initiationTrigger;
@property (retain, nonatomic) NSNumber *cameraDirection;
@property (retain, nonatomic) AuRA_TurnByTurnPortPreferences *turnByTurnPortPreferences;
@property (retain, nonatomic) AuRA_ConfigurationHints *configurationHints;
@property (retain, nonatomic) AuRA_BoxAcquisitionPreferences *boxAcquisitionPreferences;
@property (retain, nonatomic) NSNumber *hapticStreamingMode;
@property (retain, nonatomic) NSNumber *voiceProcessingEnabled;

+ (id)createAutomaticConfigurationChangeRequestWithSessionToken:(unsigned long long)a0 priority:(unsigned int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSessionToken:(unsigned long long)a0 priority:(unsigned int)a1;

@end
