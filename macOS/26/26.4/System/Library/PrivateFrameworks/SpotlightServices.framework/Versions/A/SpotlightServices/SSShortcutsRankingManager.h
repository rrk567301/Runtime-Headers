@interface SSShortcutsRankingManager : NSObject

+ (id)moveShortcutsToRelatedAppSectionsForAllSections:(id)a0 isAsYouTypeTopHitSearch:(BOOL)a1 sectionBuilderBlock:(id /* block */)a2;
+ (BOOL)supportsAppTopHitWithoutIndexFor:(id)a0;
+ (BOOL)supportsBonusSPI:(id)a0;
+ (BOOL)supportsFileProviderFor:(id)a0;

@end
