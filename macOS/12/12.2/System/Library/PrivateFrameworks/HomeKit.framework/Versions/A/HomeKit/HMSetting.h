@class NSString, NSUUID, HMSettingValue;
@protocol HMSettingDataSource, HMSettingManager;

@interface HMSetting : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) id<HMSettingDataSource> dataSource;
@property long long type;
@property (weak) id<HMSettingManager> settingManager;
@property (copy) NSString *name;
@property (copy) id value;
@property (retain) Class valueClass;
@property unsigned long long properties;
@property (readonly) HMSettingValue *internalValue;
@property (readonly, getter=isWritable) BOOL writable;
@property (readonly, copy) NSString *localizedTitle;
@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) NSUUID *identifier;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)merge:(id)a0;
- (id)initWithInternal;
- (id)initWithIdentifier:(id)a0 name:(id)a1 type:(long long)a2 value:(id)a3 properties:(unsigned long long)a4;
- (id)_initWithIdentifier:(id)a0 name:(id)a1 type:(long long)a2 value:(id)a3 properties:(unsigned long long)a4;
- (id)valueForUpdate:(id)a0;
- (void)updateValue:(id)a0 completionHandler:(id /* block */)a1;

@end
