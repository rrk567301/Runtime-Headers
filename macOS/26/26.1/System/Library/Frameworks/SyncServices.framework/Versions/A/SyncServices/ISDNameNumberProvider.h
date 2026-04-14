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

+ (id)defaultProvider;
+ (void)setProvider:(id)a0;
+ (id)provider;
+ (void)revertToDefault;
+ (void)setSyncClientCanCreateMappings:(BOOL)a0;
+ (void)replaceProvider:(id)a0;
+ (BOOL)syncClientCanCreateMappings;

- (void)refresh;
- (void)clear;
- (void)invalidate;
- (void)finalize;
- (void)dealloc;
- (void)reset;
- (BOOL)isDefaultProvider;
- (BOOL)isReplaceable;
- (id)init;
- (BOOL)canSaveMappings;
- (id)allMappings;
- (void)allowNonPersistentCreation;
- (BOOL)canCreateNewMapping;
- (id)clientMapping;
- (id)entityMapping;
- (BOOL)foundMappingForNewName:(id)a0 inMap:(id)a1;
- (void)makeIrreplaceable;
- (BOOL)mergeMissingMappingsFrom:(id)a0;
- (void)refreshFromNameNumberMappings:(id)a0;
- (void)saveMappings;
- (void)saveMappingsFor:(id)a0;

@end
