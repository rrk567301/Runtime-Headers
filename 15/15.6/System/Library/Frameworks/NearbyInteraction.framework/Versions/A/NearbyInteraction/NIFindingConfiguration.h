@class NIDiscoveryToken, NSDictionary;

@interface NIFindingConfiguration : NIConfiguration

@property (nonatomic) char isFinder;
@property (nonatomic) char isObserver;
@property (nonatomic) long long configType;
@property (copy, nonatomic) NIDiscoveryToken *specifiedToken;
@property (readonly, copy, nonatomic) NIDiscoveryToken *findingDiscoveryToken;
@property (copy, nonatomic) NSDictionary *debugParameters;
@property (readonly, copy, nonatomic) NIDiscoveryToken *sessionDiscoveryToken;
@property (nonatomic) long long preferredUpdateRate;
@property (nonatomic) long long preferredDiscoveryPriority;
@property (nonatomic, getter=isCameraAssistanceEnabled) char cameraAssistanceEnabled;
@property (nonatomic, getter=isCameraAssistanceInClientProcess) char cameraAssistanceInClientProcess;

+ (char)supportsSecureCoding;
+ (id)localDeviceConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)_initInternalWithConfigType:(long long)a0 isFinder:(char)a1 isObserver:(char)a2 specifiedToken:(id)a3 preferredUpdateRate:(long long)a4;
- (char)_internalIsCameraAssistanceEnabled;
- (char)_internalIsCameraAssistanceInClientProcess;
- (char)canUpdateToConfiguration:(id)a0;
- (id)initWithRole:(long long)a0 discoveryToken:(id)a1 preferredUpdateRate:(long long)a2;

@end
