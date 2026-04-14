@class NSUUID, NSString, NSArray, NSMutableDictionary;

@interface HMSettingGroup : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_settings;
    NSMutableDictionary *_groups;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *name;
@property (copy) NSString *keyPath;
@property (readonly, copy) NSString *localizedTitle;
@property (readonly, copy) NSArray *settings;
@property (readonly, copy) NSArray *groups;

- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)longDescription;
- (void)addGroup:(id)a0;
- (void)addSetting:(id)a0;
- (void)fixNestedKeyPaths;
- (void)_longDescriptionWithCurrentGroup:(id)a0 currentSettings:(id)a1;
- (id)initWithIdentifier:(id)a0 name:(id)a1 groups:(id)a2 settings:(id)a3;

@end
