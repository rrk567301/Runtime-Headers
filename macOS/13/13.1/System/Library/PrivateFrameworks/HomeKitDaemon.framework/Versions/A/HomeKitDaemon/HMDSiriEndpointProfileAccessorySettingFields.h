@class NSString, NSMutableDictionary;

@interface HMDSiriEndpointProfileAccessorySettingFields : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_serializeFields;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPaths;
+ (id)logCategory;
+ (id)fieldKeyForKeyPath:(id)a0;
+ (id)booleanValueKeyPaths;
+ (id)numberValueKeyPaths;
+ (id)languageValueKeyPaths;

- (id)init;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)setBoolValue:(BOOL)a0 forKeyPath:(id)a1;
- (void)setNumberValue:(id)a0 forKeyPath:(id)a1;
- (void)setLanguageValue:(id)a0 forKeyPath:(id)a1;
- (id)serializeFields;

@end
