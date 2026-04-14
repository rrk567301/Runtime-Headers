@class HMAccessorySelectionSetting, NSString, NSUUID;

@interface HMAccessorySelectionSettingItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) HMAccessorySelectionSetting *setting;
@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *title;
@property (readonly, copy) NSString *localizedTitle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;

@end
