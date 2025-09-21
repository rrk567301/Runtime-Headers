@interface PERevertPreset : PEEditAction

- (long long)actionType;
- (char)forceRunAsUnadjustedAsset;
- (void)applyToLoadResult:(id)a0 completion:(id /* block */)a1;

@end
