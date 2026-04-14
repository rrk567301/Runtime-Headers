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
+ (void)revertToDefault;
+ (void)replaceProvider:(id)a0;
+ (void)setSyncClientCanCreateMappings:(BOOL)a0;
+ (BOOL)syncClientCanCreateMappings;

- (void)dealloc;
- (id)init;
- (void)finalize;
- (void)invalidate;
- (void)reset;
- (void)clear;
- (void)refresh;
- (BOOL)isReplaceable;
- (BOOL)isDefaultProvider;
- (BOOL)foundMappingForNewName:(id)a0 inMap:(id)a1;
- (void)saveMappingsFor:(id)a0;
- (void)saveMappings;
- (void)allowNonPersistentCreation;
- (BOOL)canCreateNewMapping;
- (id)allMappings;
- (void)refreshFromNameNumberMappings:(id)a0;
- (void)makeIrreplaceable;
- (id)entityMapping;
- (id)clientMapping;
- (BOOL)canSaveMappings;
- (BOOL)mergeMissingMappingsFrom:(id)a0;

@end
