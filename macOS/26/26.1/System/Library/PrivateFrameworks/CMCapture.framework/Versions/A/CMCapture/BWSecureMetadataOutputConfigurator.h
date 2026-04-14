@class NSMutableArray, NSMutableDictionary, BWSecureMetadataOutputConfiguration;
@protocol BWSecureMetadataOutputConfiguratorDelegate;

@interface BWSecureMetadataOutputConfigurator : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BWSecureMetadataOutputConfiguration *_configurationForPrimaryClient;
    NSMutableDictionary *_secondaryClientConfigurationsByClientID;
    NSMutableDictionary *_maximumFrameRateByClientID;
    NSMutableArray *_registeredAttachedSessionIDs;
    BWSecureMetadataOutputConfiguration *_coalescedSecureMetadataOutputConfiguration;
    id<BWSecureMetadataOutputConfiguratorDelegate> _delegate;
}

@property (retain) BWSecureMetadataOutputConfiguration *configurationForPrimaryClient;
@property (readonly) BWSecureMetadataOutputConfiguration *coalescedSecureMetadataOutputConfiguration;
@property (nonatomic) id<BWSecureMetadataOutputConfiguratorDelegate> delegate;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)_coalescedClientConfiguration;
- (void)_updateSecureMetadataOutputConfigurationForceDelegate:(BOOL)a0;
- (void)registerAttachedSessionID:(id)a0;
- (void)resetAllConfigurations;
- (void)setConfiguration:(id)a0 forAttachedSessionID:(id)a1;
- (void)setMaximumFrameRate:(float)a0 forAttachedSessionID:(id)a1;
- (void)unregisterAttachedSessionID:(id)a0;

@end
