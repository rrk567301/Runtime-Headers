@class ISDNameNumberMapping;

@interface ISDNameNumberProvider : NSObject {
    ISDNameNumberMapping *_entityMapping;
    ISDNameNumberMapping *_clientMapping;
    BOOL _mapsInitialized;
    BOOL _isValid;
    BOOL _canCreate;
    BOOL _canSave;
    BOOL _irreplaceable;
    BOOL _useRegardless;
    id _basis;
    BOOL _inRefresh;
}

+ (id)provider;
+ (void)setProvider:(id)a0;
+ (id)defaultProvider;
+ (BOOL)syncClientCanCreateMappings;
+ (void)revertToDefault;
+ (void)replaceProvider:(id)a0;
+ (void)setSyncClientCanCreateMappings:(BOOL)a0;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)reset;
- (void)clear;
- (void)refresh;
- (BOOL)foundMappingForNewName:(id)a0 inMap:(id)a1;
- (id)clientMapping;
- (id)entityMapping;
- (void)saveMappings;
- (void)saveMappingsFor:(id)a0;
- (id)allMappings;
- (void)allowNonPersistentCreation;
- (BOOL)canCreateNewMapping;
- (void)refreshFromNameNumberMappings:(id)a0;
- (BOOL)isReplaceable;
- (BOOL)isDefaultProvider;
- (BOOL)canSaveMappings;
- (BOOL)mergeMissingMappingsFrom:(id)a0;
- (void)makeIrreplaceable;

@end
