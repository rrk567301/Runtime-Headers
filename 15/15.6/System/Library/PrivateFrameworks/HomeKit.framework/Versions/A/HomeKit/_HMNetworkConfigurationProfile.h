@class NSArray, NSString, HMAccessoryNetworkAccessViolation;
@protocol _HMNetworkConfigurationProfileDelegate;

@interface _HMNetworkConfigurationProfile : _HMAccessoryProfile <HMFLogging>

@property (readonly) long long targetProtectionMode;
@property (readonly) long long currentProtectionMode;
@property (readonly, getter=isNetworkAccessRestricted) char networkAccessRestricted;
@property (readonly) NSArray *allowedHosts;
@property (readonly) HMAccessoryNetworkAccessViolation *accessViolation;
@property (readonly) char supportsWiFiReconfiguration;
@property (readonly) long long credentialType;
@property (weak, nonatomic) id<_HMNetworkConfigurationProfileDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)setCredentialType:(long long)a0;
- (id)logIdentifier;
- (id)messageTargetUUID;
- (void)setSupportsWiFiReconfiguration:(char)a0;
- (void)_handleAccessViolationUpdated:(id)a0;
- (void)_handleHostsUpdated:(id)a0;
- (void)_handleWiFiReconfigurationUpdated:(id)a0;
- (void)_notifyDelegateOfNetworkAccessModeChanged;
- (void)_notifyDelegateOfUpdatedAccessViolation;
- (void)_notifyDelegateOfUpdatedAllowedHosts;
- (void)_notifyDelegateOfUpdatedProtectionMode;
- (void)_notifyDelegateOfUpdatedWiFiCredentialType;
- (void)_notifyDelegateOfUpdatedWiFiReconfigurationSupport;
- (void)_registerNotificationHandlers;
- (id)initWithAccessoryIdentifier:(id)a0 targetProtection:(long long)a1 currentProtection:(long long)a2 networkAccessRestricted:(char)a3 allowedHosts:(id)a4 accessViolation:(id)a5 supportsWiFiReconfiguration:(char)a6 credentialType:(long long)a7;
- (char)mergeFromNewObject:(id)a0;
- (id)messageDestination;
- (void)previewAllowedHostsForAutoProtectionModeWithCompletionHandler:(id /* block */)a0;
- (void)reconfigureWiFiWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)setAccessViolation:(id)a0;
- (void)setAllowedHosts:(id)a0;
- (void)setCurrentProtectionMode:(long long)a0;
- (void)setNetworkAccessRestricted:(char)a0;
- (void)setTargetProtectionMode:(long long)a0;

@end
