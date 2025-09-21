@class NSUUID, NSString, NSArray, NSNumber, HMSiriEndpointProfilesMessenger;
@protocol _HMSiriEndpointProfileDelegate;

@interface _HMSiriEndpointProfile : _HMAccessoryProfile <HMFLogging, HMFObject>

@property (retain) HMSiriEndpointProfilesMessenger *messenger;
@property (weak) id<_HMSiriEndpointProfileDelegate> delegate;
@property long long sessionState;
@property (retain) NSUUID *sessionHubIdentifier;
@property (retain) NSString *siriEndpointVersion;
@property (nonatomic) unsigned long long capability;
@property (retain) NSString *siriEngineVersion;
@property (retain) NSNumber *activeIdentifier;
@property (nonatomic) char manuallyDisabled;
@property long long multifunctionButton;
@property (retain) NSArray *assistants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (char)supportsSecureCoding;
+ (id)shortDescription;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)logIdentifier;
- (void)__configureWithContext:(id)a0 accessory:(id)a1;
- (void)_handleUpdateProfileState:(id)a0;
- (char)_mergeAssistants:(id)a0;
- (void)_registerNotificationHandlers;
- (void)applyOnboardingSelections:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSiriHistoryWithCompletionHandler:(id /* block */)a0;
- (char)mergeFromNewObject:(id)a0;
- (id)messageDestination;
- (void)notifyClientDidUpdateSessionState;
- (void)refreshStateWithCompletionHandler:(id /* block */)a0;
- (void)setNotifications:(char)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
