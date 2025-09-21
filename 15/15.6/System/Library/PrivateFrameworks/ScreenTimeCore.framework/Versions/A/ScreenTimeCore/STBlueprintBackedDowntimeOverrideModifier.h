@class STBlueprint, STDowntimeOverride;

@interface STBlueprintBackedDowntimeOverrideModifier : NSObject <STDowntimeOverrideModifier>

@property (readonly) STBlueprint *downtimeBlueprint;
@property (readonly, copy) STDowntimeOverride *activeOverride;

- (void).cxx_destruct;
- (char)_saveWithError:(id *)a0;
- (void)_deleteOrphanedOrTombstonedDowntimeOverridesInContext:(id)a0;
- (void)_tombstoneDowntimeOverride;
- (char)applyDowntimeOverride:(id)a0 error:(id *)a1;
- (id)initWithDowntimeBlueprint:(id)a0;
- (char)removeDowntimeOverrideWithError:(id *)a0;

@end
