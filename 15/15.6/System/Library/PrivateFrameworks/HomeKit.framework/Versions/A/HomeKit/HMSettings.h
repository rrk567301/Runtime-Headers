@class HMSettingGroup;
@protocol HMSettingsOwner, HMSettingsDelegate;

@interface HMSettings : NSObject

@property (readonly, weak) id<HMSettingsOwner> owner;
@property (readonly) HMSettingGroup *rootGroup;
@property (readonly, getter=isControllable) char controllable;
@property (weak) id<HMSettingsDelegate> delegate;

- (id)description;
- (void).cxx_destruct;
- (id)longDescription;
- (id)initWithSettingsOwner:(id)a0;

@end
