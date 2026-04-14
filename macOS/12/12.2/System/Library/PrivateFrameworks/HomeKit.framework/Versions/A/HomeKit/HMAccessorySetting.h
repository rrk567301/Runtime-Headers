@class HMAccessorySettingGroup, NSString, NSUUID, _HMAccessorySetting;

@interface HMAccessorySetting : HMSetting <_HMAccesorySettingDelegate, HMFLogging>

@property (readonly) _HMAccessorySetting *internal;
@property (weak) HMAccessorySettingGroup *group;
@property (readonly, copy) NSString *keyPath;
@property (readonly) Class valueClass;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, getter=isReflected) BOOL reflected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)logCategory;
+ (id)settingForInternal:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)value;
- (BOOL)isWritable;
- (id)initWithInternal:(id)a0;
- (id)logIdentifier;
- (void)updateValue:(id)a0 completionHandler:(id /* block */)a1;
- (id)keyPathForSetting:(id)a0;
- (void)_settingDidUpdateValue:(id)a0;
- (void)_settingWillUpdateValue:(id)a0;
- (id)initWithKey:(id)a0 properties:(unsigned long long)a1 value:(id)a2;
- (void)updateReflected:(BOOL)a0;
- (void)settingWillUpdateReflected;
- (void)settingDidUpdateReflected;

@end
