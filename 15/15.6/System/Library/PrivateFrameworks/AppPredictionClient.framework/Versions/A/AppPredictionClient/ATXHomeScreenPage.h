@class NSString, NSSet, NSArray, NSDictionary;

@interface ATXHomeScreenPage : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long numberOfLeafIconSpots;
@property (nonatomic) long long suggestedPageType;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic, getter=isHidden) char hidden;
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

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initFromDictionaryRepresentation:(id)a0;
- (char)_containsWidgetWithExtensionBundleId:(id)a0;
- (id)_leafIconsFromExistingData;
- (char)containsAppPredictionPanel;
- (char)containsSuggestionsWidget;
- (id)dictionaryRepresentationForIntrospection;
- (void)enumerateApps:(id /* block */)a0;
- (void)enumerateAppsConsideringFolders:(char)a0 block:(id /* block */)a1;
- (id)nonFolderAppsOnPage;

@end
