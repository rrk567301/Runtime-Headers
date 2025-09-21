@class NSString;

@interface NoBackhaulHandler : ExpertSystemHandlerCore <ManagedEventInfoProtocol>

@property (nonatomic) char systemForeground;
@property (nonatomic) char callInForeground;
@property (nonatomic) char dndWhileDriving;
@property (nonatomic) unsigned int activationIdentifier;
@property (nonatomic) unsigned long long stepper;
@property (readonly, nonatomic) char verifyDefaultGateway;
@property (readonly, nonatomic) char ignoreBaseband;
@property (readonly, nonatomic) char observeApsdFailure;
@property (readonly, nonatomic) char observeWiFiRxSignalFullBars;
@property (readonly, nonatomic) char observeWiFiRxSignalThresholded;
@property (readonly, nonatomic) char observeForegroundActivity;
@property (readonly, nonatomic) char observeDefaultRouteSignal;
@property (readonly, nonatomic) char noBackhaulActivated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)internalStateDictionary;
+ (id)configureClass:(id)a0;

- (id)internalStateDictionary;
- (int)configureInstance:(id)a0;
- (void)generateInfoForId:(unsigned long long)a0 context:(const char *)a1 uuid:(id)a2 completionBlock:(id /* block */)a3;
- (BOOL)noteSymptom:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;

@end
