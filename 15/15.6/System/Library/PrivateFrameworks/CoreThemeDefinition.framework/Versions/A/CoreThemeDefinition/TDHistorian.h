@class CoreThemeDocument;

@interface TDHistorian : NSObject {
    CoreThemeDocument *document;
}

- (void)updateEntriesForManagedObjects:(id)a0;
- (void)_updateEntryForManagedObject:(id)a0;
- (id)_updateRecordsWithName:(id)a0 sinceDate:(id)a1;
- (id)colorsChangedSinceDate:(id)a0;
- (id)facetDefinitionsChangedSinceDate:(id)a0;
- (id)fontSizesChangedSinceDate:(id)a0;
- (id)fontsChangedSinceDate:(id)a0;
- (char)foundDataChangesSinceDate:(id)a0;
- (id)initWithDocument:(id)a0;
- (id)keySpecsForRenditionsRemovedSinceDate:(id)a0;
- (id)namedElementsChangedSinceDate:(id)a0;
- (id)productionsChangedSinceDate:(id)a0 uuidNeedsReset:(char *)a1;
- (id)productionsWithModifiedAssets;

@end
