@class NSMapTable;
@protocol APSettingsStorableProtocol;

@interface APSettings : NSObject <APSettingsProtocol>

@property (class, readonly, nonatomic) NSMapTable *mapTable;

@property (readonly, nonatomic) id<APSettingsStorableProtocol> storage;

+ (id)defaultValues;
+ (id)settings;
+ (id)storageWithDefaultValues:(id)a0;

- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (void)synchronize;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)_namespacedKey:(id)a0;
- (id)_gatherSubclassProperties;
- (id)_propertyNameFromSetSelectorString:(id)a0;

@end
