@class NSManagedObjectContext, NSArray, NSString;

@interface ICFoldersFilterTypeSelection : ICFilterTypeSelection

@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) unsigned long long inclusionType;
@property (retain, nonatomic) NSArray *folderIdentifiers;
@property (readonly, copy, nonatomic) NSString *folderSummaryList;
@property (readonly, nonatomic) BOOL containsSharedFolder;

+ (id)keyPathsForValuesAffectingIsEmpty;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (long long)filterType;
- (id)filterName;
- (id)rawFilterValue;
- (id)emptySummaryTitle;
- (id)emptySummary;
- (id)shortEmptySummary;
- (id)initWithManagedObjectContext:(id)a0 inclusionType:(unsigned long long)a1 folderIdentifiers:(id)a2;
- (void)addFolderIdentifier:(id)a0;
- (void)removeFolderIdentifier:(id)a0;
- (id)folderTitlesForIdentifiers:(id)a0;
- (BOOL)isEqualToICFoldersFilterTypeSelection:(id)a0;

@end
