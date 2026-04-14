@class NSString, NSDictionary, HMDMediaSession;

@interface HMDMediaProfile : HMDAccessoryProfile <HMFLogging> {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
}

@property (readonly, copy) NSString *urlString;
@property (readonly, copy) NSDictionary *assistantObject;
@property (readonly, copy) NSString *mediaRouteID;
@property (retain) HMDMediaSession *mediaSession;
@property (readonly, nonatomic) unsigned long long capability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (id)namespace;
+ (id)uniqueIdentifierFromAccessory:(id)a0;
+ (id)sessionNamespace;
+ (id)uniqueIdentifierFromAccessoryUUID:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)registerForNotifications;
- (void)unregisterForNotifications;
- (id)initWithAccessory:(id)a0;
- (void)registerForMessages;
- (id)initWithAccessory:(id)a0 uniqueIdentifier:(id)a1 services:(id)a2 workQueue:(id)a3;
- (void)configureWithMessageDispatcher:(id)a0 configurationTracker:(id)a1;
- (void)_handleSetPower:(id)a0;
- (BOOL)_updatePlayback:(id)a0;
- (BOOL)_updateRefreshPlayback:(id)a0;
- (void)sessionAudioControlUpdated:(id)a0;
- (void)_handleSetValue:(id)a0 withRequestProperty:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)updateWithResponses:(id)a0 requestMessageInformation:(id)a1;
- (void)_handleSetPlayback:(id)a0;
- (void)_handleMediaSessionSetAudioControl:(id)a0;
- (void)_handleRefreshPlayback:(id)a0;
- (void)handleSessionPlaybackStateUpdatedNotification:(id)a0;
- (void)handleSessionVolumeUpdatedNotification:(id)a0;
- (BOOL)_updateAudioControl:(id)a0;
- (void)_handleMediaResponses:(id)a0 message:(id)a1;
- (void)_sessionPlaybackStateUpdated:(id)a0 notifyXPCClients:(BOOL)a1;
- (void)handleSetValue:(id)a0 withRequestProperty:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)handleSessionUpdatedNotification:(id)a0;

@end
