@class NSString;

@interface FBSSetting : NSObject <FBSMutableSetting_Internal, FBSSetting> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    Class _settingsClass;
    char _lock_initialized;
    char _local;
    char _legacy;
    char _type;
    char _isBSSettings;
    char _redacted;
    char _volatile;
    char _propagating;
    char _nullPreserving;
    NSString *_name;
    unsigned long long _setting;
    unsigned long long _legacySetting;
    Class _extension;
    NSString *_extensionID;
    Class _expectedClass;
    long long _specialCollection;
    id _defaultValue;
    id /* block */ _descriptionProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setDefaultValue:(id)a0;
- (void)setDescriptionProvider:(id /* block */)a0;
- (void)setPropagating:(char)a0;
- (void)_finishInitializing;
- (id)indirect_defaultValue;
- (char)indirect_isLegacy;
- (char)indirect_isPropagating;
- (unsigned long long)indirect_legacySetting;
- (id)indirect_name;
- (char)matchesProperty:(SEL)a0;
- (char)matchesPropertyName:(id)a0;
- (void)setNullPreserving:(char)a0;
- (void)setPrivacySensitive:(char)a0;
- (void)setVolatile:(char)a0;

@end
