@class NSUUID, NSString, NSArray, NSMutableDictionary, NSDictionary, GCReplayKitGestureSettings, NSMutableSet, NSUserDefaults, GCController;
@protocol NSCopying, NSSecureCoding, NSObject;

@interface GCControllerSettings : NSObject <NSSecureCoding> {
    NSUserDefaults *_defaults;
    NSDictionary *_elementMappingKeyToElement;
    NSMutableDictionary *__elementMappingFromUserDefaults;
    NSArray *_customizedElementSettings;
    GCController *_controller;
    NSUUID *_customizedUUID;
    NSMutableDictionary *_elementSettings;
    char _settingsAppOpenedAtLeastOnce;
    NSMutableSet *_observedKeyPaths;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char customized;
@property (nonatomic) unsigned long long settingsID;
@property (readonly, nonatomic) id<NSCopying, NSObject, NSSecureCoding> uniqueIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *elementMappings;
@property (nonatomic) char hapticsEnabled;
@property (nonatomic) char screenShotEnabled;
@property (nonatomic) char videoRecordingEnabled;
@property (nonatomic) char customizationsEnabled;
@property (nonatomic) char serialized;
@property (retain, nonatomic) NSString *screenShotKey;
@property (nonatomic) long long screenShotGesture;
@property (retain, nonatomic) NSString *videoRecordingKey;
@property (nonatomic) long long videoRecordingGesture;
@property (nonatomic) long long videoRecordingMode;
@property (copy, nonatomic) GCReplayKitGestureSettings *replayKitGestureSettings;
@property (readonly, nonatomic) NSDictionary *general_gameIntentMappings;
@property (copy, nonatomic) id /* block */ settingsChangedHandler;

+ (id)controllerSettingsCustomizedChangedHandlers;
+ (id)metaDefaults;
+ (void)registerSettingsCustomizedHandler:(id /* block */)a0 forController:(id)a1 forKey:(id)a2;
+ (void)registerSettingsCustomizedHandler:(id /* block */)a0 forKey:(id)a1;
+ (void)setSettingsExist:(char)a0 forBundleIdentifier:(id)a1;
+ (void)setSettingsExist:(char)a0 forController:(id)a1 forBundleIdentifier:(id)a2;
+ (id)settingsCustomizedChangedHandlers;
+ (char)settingsCustomizedForController:(id)a0 forBundleIdentifier:(id)a1;
+ (id)settingsDispatchQueue;
+ (void)unregisterSettingsCustomizedHandlerForController:(id)a0 forKey:(id)a1;
+ (void)unregisterSettingsCustomizedHandlerForKey:(id)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)defaultValues;
- (void)unregisterForSettingsCustomized;
- (void)setMappingForElement:(id)a0 toElement:(id)a1;
- (void)_updateControllerReference:(id)a0;
- (void)deleteObjectForKey:(id)a0;
- (id)elementSettingForKey:(id)a0;
- (void)eraseAllSettings;
- (id)initForController:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 forController:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 forControllerIdentifier:(id)a1;
- (void)initializeElementMappings;
- (void)initializeReplayKitDefaultMappings;
- (void)initializeUserDefaults;
- (id)mappingForButton:(id)a0;
- (id)mappingForDirectionPad:(id)a0;
- (id)mappingForElement:(id)a0;
- (id)mappingForTouchpad:(id)a0;
- (id)mappingKeyForElement:(id)a0;
- (void)observeDefaultsKeyPath:(id)a0 options:(unsigned long long)a1 context:(void *)a2;
- (void)observeDefaultsKeyPaths:(id)a0;
- (void)populateElementSettings;
- (void)refreshSettingsExist;
- (void)registerForSettingsCustomized;
- (void)restoreElementMappingToDefault;
- (void)saveBool:(char)a0 forKey:(id)a1;
- (void)saveObject:(id)a0 forKey:(id)a1;
- (void)setGameIntentMappings:(id)a0;
- (id)settingsForElement:(id)a0;
- (id)staticDefaultValues;
- (id)suiteNameForBundleIdentifier:(id)a0;

@end
