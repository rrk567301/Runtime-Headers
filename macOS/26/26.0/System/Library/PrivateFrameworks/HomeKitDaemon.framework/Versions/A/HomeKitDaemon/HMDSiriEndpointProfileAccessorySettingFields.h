@class NSString, NSMutableDictionary;

@interface HMDSiriEndpointProfileAccessorySettingFields : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_serializeFields;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)keyPaths;
+ (id)booleanValueKeyPaths;
+ (id)fieldKeyForKeyPath:(id)a0;
+ (id)languageValueKeyPaths;
+ (id)numberValueKeyPaths;

- (id)attributeDescriptions;
- (id)init;
- (void).cxx_destruct;
- (id)serializeFields;
- (void)setBoolValue:(BOOL)a0 forKeyPath:(id)a1;
- (void)setLanguageValue:(id)a0 forKeyPath:(id)a1;
- (void)setNumberValue:(id)a0 forKeyPath:(id)a1;

@end
