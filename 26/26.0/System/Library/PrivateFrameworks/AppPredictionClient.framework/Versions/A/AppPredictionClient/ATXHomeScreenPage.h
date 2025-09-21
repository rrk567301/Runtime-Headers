@class NSString, NSSet, NSArray, NSDictionary;

@interface ATXHomeScreenPage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long numberOfLeafIconSpots;
@property (nonatomic) long long suggestedPageType;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) unsigned long long maxPortraitRows;
@property (nonatomic) unsigned long long maxPortraitColumns;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSSet *associatedModeUUIDs;
@property (copy, nonatomic) NSArray *stacks;
@property (copy, nonatomic) NSArray *panels;
@property (copy, nonatomic) NSDictionary *appLocations;
@property (copy, nonatomic) NSDictionary *webClipLocations;
@property (copy, nonatomic) NSArray *leafIcons;
@property (copy, nonatomic) NSArray *candidateApps;
@property (readonly, nonatomic) NSArray *leafAppIcons;

- (id)dictionaryRepresentationForIntrospection;
- (BOOL)_containsWidgetWithExtensionBundleId:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)nonFolderAppsOnPage;
- (id)init;
- (BOOL)containsSuggestionsWidget;
- (void)enumerateApps:(id /* block */)a0;
- (id)_leafIconsFromExistingData;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initFromDictionaryRepresentation:(id)a0;
- (BOOL)containsAppPredictionPanel;
- (unsigned long long)hash;
- (void)enumerateAppsConsideringFolders:(BOOL)a0 block:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
