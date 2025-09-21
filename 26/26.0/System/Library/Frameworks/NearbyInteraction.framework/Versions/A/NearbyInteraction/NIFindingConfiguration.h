@class NIDiscoveryToken, NSDictionary, NSArray;

@interface NIFindingConfiguration : NIConfiguration

@property (nonatomic) BOOL isFinder;
@property (nonatomic) BOOL isObserver;
@property (nonatomic) long long configType;
@property (copy, nonatomic) NIDiscoveryToken *specifiedToken;
@property (readonly, copy, nonatomic) NIDiscoveryToken *findingDiscoveryToken;
@property (copy, nonatomic) NSDictionary *debugParameters;
@property (nonatomic) long long discoveryTokenVariant;
@property (nonatomic) long long requestedMeasurementQuality;
@property (readonly, copy, nonatomic) NIDiscoveryToken *sessionDiscoveryToken;
@property (nonatomic) long long preferredUpdateRate;
@property (nonatomic) long long preferredDiscoveryPriority;
@property (nonatomic, getter=isCameraAssistanceEnabled) BOOL cameraAssistanceEnabled;
@property (nonatomic, getter=isCameraAssistanceInClientProcess) BOOL cameraAssistanceInClientProcess;
@property (retain) NSArray *monitoredRegions;

+ (BOOL)supportsSecureCoding;

- (BOOL)_internalIsCameraAssistanceInClientProcess;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (id)description;
- (id)descriptionInternal;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)canUpdateToConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)_initInternalWithConfigType:(long long)a0 isFinder:(BOOL)a1 isObserver:(BOOL)a2 specifiedToken:(id)a3 preferredUpdateRate:(long long)a4 requestedMeasurementQuality:(long long)a5;
- (id)initWithDiscoveryToken:(id)a0 requestedUpdateRate:(long long)a1 requestedMeasaurementQuality:(long long)a2;
- (id)initWithRole:(long long)a0 discoveryToken:(id)a1 preferredUpdateRate:(long long)a2;

@end
