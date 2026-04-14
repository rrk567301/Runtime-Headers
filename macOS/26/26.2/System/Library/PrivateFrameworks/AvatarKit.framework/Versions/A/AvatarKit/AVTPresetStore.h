@class AVTPreset, NSMutableArray;

@interface AVTPresetStore : NSObject {
    AVTPreset *_presets[40];
    AVTPreset *_resolvedPresets[40];
    NSMutableArray *_unresolvedDependencies[40];
    unsigned long long _unresolvedDependencyCount;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasUnresolvedDependenciesForCategory:(long long)a0;
- (void)registerDependenciesForPreset:(id)a0 previouslyRegisteredPresets:(id)a1;
- (unsigned long long)solveDependencies;
- (void)solveDependenciesForCategory:(long long)a0;

@end
