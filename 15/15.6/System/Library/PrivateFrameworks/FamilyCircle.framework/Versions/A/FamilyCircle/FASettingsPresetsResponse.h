@class NSArray, FASettingsPreset;

@interface FASettingsPresetsResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *availablePresets;
@property (readonly, nonatomic) FASettingsPreset *expectedPreset;
@property (readonly, nonatomic) FASettingsPreset *currentPreset;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAvailablePresets:(id)a0 expectedPreset:(id)a1 currentPreset:(id)a2;

@end
