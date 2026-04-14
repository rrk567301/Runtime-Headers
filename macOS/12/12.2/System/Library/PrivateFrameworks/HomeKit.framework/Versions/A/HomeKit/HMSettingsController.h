@class NSUUID, NSString, HMSettings, NSDictionary, HMSettingGroup, HMSettingsMessageHandler, _HMContext, NSMapTable;
@protocol HMSettingsDelegate;

@interface HMSettingsController : NSObject <HMFLogging, HMSettingManager, HMSettingsOwner> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMSettingGroup *_rootGroup;
    NSMapTable *_groupsMap;
    NSMapTable *_settingsMap;
}

@property (retain) HMSettingsMessageHandler *messageHandler;
@property (retain) NSDictionary *encodedSettings;
@property (retain) _HMContext *context;
@property (readonly) NSUUID *parentIdentifier;
@property (readonly) NSString *codingKey;
@property (readonly) HMSettings *settings;
@property (weak) id<HMSettingsDelegate> delegate;
@property (readonly) HMSettingGroup *rootGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)configureWithContext:(id)a0;
- (id)logIdentifier;
- (void)updateValueForSetting:(id)a0 value:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithParentIdentifier:(id)a0 codingKey:(id)a1 messageHandler:(id)a2 settingsCreator:(id)a3;
- (id)initWithParentIdentifier:(id)a0 codingKey:(id)a1;
- (void)setRootGroup:(id)a0;
- (BOOL)hasSettings;
- (void)setSetting:(id)a0 withGroupIdentifier:(id)a1;
- (id)settingForIdentifier:(id)a0;
- (BOOL)hasSettingGroups;
- (void)setSettingGroup:(id)a0 withParentGroupIdentifier:(id)a1;
- (id)settingGroupForIdentifier:(id)a0;
- (void)mergeWith:(id)a0 settingsInitializedWasModified:(BOOL)a1;
- (void)notifyDelegateOfUpdate;
- (void)decodeWithCoder:(id)a0;
- (void)__notifyDelegateSettingsDidUpdate;
- (void)__notifyDelegateDidUpdateKeyPath:(id)a0;

@end
