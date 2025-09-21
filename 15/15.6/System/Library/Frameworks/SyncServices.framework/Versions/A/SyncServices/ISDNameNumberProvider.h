@class ISDNameNumberMapping;

@interface ISDNameNumberProvider : NSObject {
    ISDNameNumberMapping *_entityMapping;
    ISDNameNumberMapping *_clientMapping;
    char _mapsInitialized;
    char _isValid;
    char _canCreate;
    char _canSave;
    char _irreplaceable;
    char _useRegardless;
    id _basis;
    char _inRefresh;
}

+ (id)provider;
+ (void)setProvider:(id)a0;
+ (id)defaultProvider;
+ (void)revertToDefault;
+ (void)setSyncClientCanCreateMappings:(char)a0;
+ (void)replaceProvider:(id)a0;
+ (char)syncClientCanCreateMappings;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)invalidate;
- (void)reset;
- (void)clear;
- (void)refresh;
- (char)isReplaceable;
- (char)isDefaultProvider;
- (char)canSaveMappings;
- (id)allMappings;
- (void)allowNonPersistentCreation;
- (char)canCreateNewMapping;
- (id)clientMapping;
- (id)entityMapping;
- (char)foundMappingForNewName:(id)a0 inMap:(id)a1;
- (void)makeIrreplaceable;
- (char)mergeMissingMappingsFrom:(id)a0;
- (void)refreshFromNameNumberMappings:(id)a0;
- (void)saveMappings;
- (void)saveMappingsFor:(id)a0;

@end
