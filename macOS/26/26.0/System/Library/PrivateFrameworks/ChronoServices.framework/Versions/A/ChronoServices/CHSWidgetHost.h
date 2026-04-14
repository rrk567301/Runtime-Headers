@class NSString, CHSChronoServicesConnection, CHSWidgetConfiguration;

@interface CHSWidgetHost : NSObject <BSDescriptionStreamable> {
    NSString *_loggingIdentifier;
    CHSChronoServicesConnection *_connection;
    unsigned long long _activationState;
    BOOL _invalid;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) CHSWidgetConfiguration *configuration;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)dealloc;
- (void)invalidate;
- (void)_connectionCreateOrUpdateConfigurations;
- (id)initWithIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 configuration:(id)a1 activationState:(unsigned long long)a2 connection:(id)a3;
- (id)initWithIdentifier:(id)a0 configuration:(id)a1 active:(BOOL)a2;
- (id)init;
- (void)_connectionUpdateActivationState;
- (id)_initWithHost:(id)a0;
- (id)initWithInactiveIdentifier:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void)deactivate;
- (void)activate;
- (void)_connectionRemoveHost;
- (unsigned long long)_activationState;
- (id)_connectionCopy;
- (void).cxx_destruct;

@end
