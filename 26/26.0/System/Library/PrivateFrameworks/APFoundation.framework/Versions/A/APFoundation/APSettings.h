@class NSMapTable;
@protocol APSettingsStorableProtocol;

@interface APSettings : NSObject <APSettingsProtocol>

@property (class, readonly, nonatomic) NSMapTable *mapTable;

@property (readonly, nonatomic) id<APSettingsStorableProtocol> storage;

+ (id)defaultValues;
+ (id)settings;
+ (id)storageWithDefaultValues:(id)a0;

- (void)synchronize;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)_namespacedKey:(id)a0;
- (id)_gatherSubclassProperties;
- (id)_propertyNameFromSetSelectorString:(id)a0;

@end
