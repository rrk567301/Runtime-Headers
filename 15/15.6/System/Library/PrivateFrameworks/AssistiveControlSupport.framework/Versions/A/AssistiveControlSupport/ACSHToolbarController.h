@class NSString, ACSHPanelCollection, NSMapTable, NSArray;
@protocol ACSHToolbarControlDelegate;

@interface ACSHToolbarController : NSObject

@property (retain, nonatomic) ACSHPanelCollection *panelCollection;
@property (retain) NSMapTable *_toolbarMergedPanelsByOriginalPanel;
@property (retain) NSMapTable *_toolbarMergedPanelIdentifiersByOriginalPanel;
@property (copy, nonatomic) NSString *_frontmostApplicationIdentifier;
@property (nonatomic) char _shouldReadAndWritePreferences;
@property (nonatomic) char _forTemplate;
@property (readonly, nonatomic) NSArray *_panelsToMergeToolbarsInto;
@property (nonatomic) unsigned long long productSupportType;
@property (nonatomic) char allowUserToolbars;
@property (nonatomic) char allowDwellActions;
@property (nonatomic) char allowSuggestionsBar;
@property (nonatomic) char allowHoverText;
@property (weak, nonatomic) id<ACSHToolbarControlDelegate> delegate;

+ (char)_panelElementContainsHoverText:(id)a0;
+ (id)_maximumWidthPanelOfPanels:(id)a0;
+ (char)_panelElement:(id)a0 orChildrenRecursivelyContainElementPassingTest:(id /* block */)a1;
+ (char)_panelElementContainsSuggestions:(id)a0;
+ (char)_panelElementHasDwellActions:(id)a0;
+ (char)_panelShouldShowToolbarsByDefault:(id)a0;
+ (char)_showUserToolbarPanel:(id)a0 basedOnApplicationBundleID:(id)a1;
+ (id)functionKeyPanelForPanel:(id)a0 panelCollection:(id)a1 returningMergeOrientation:(unsigned long long *)a2;
+ (id)orderedToolbarIdentifiersForPanelCollection:(id)a0;
+ (id)templateKeyboardPanelsForProductSupportType:(unsigned long long)a0 undoManager:(id)a1;
+ (id)toolbarForIdentifier:(id)a0 panelCollection:(id)a1 forTemplate:(char)a2;

- (void).cxx_destruct;
- (id)_mergedPanelForBasePanel:(id)a0 panelsToMerge:(id)a1 customOptionsMapTable:(id)a2;
- (char)_panel:(id)a0 shouldShowUserToolbarBasedOnPreferencesWithIdentifier:(id)a1;
- (id)_panelByAddingToolbarsPanelsToPanel:(id)a0 returningToolbarPanelIdentifiers:(id *)a1;
- (char)_panelIdentifierRepresentsBestKeyboardAccountForUserSettings:(id)a0;
- (char)_panelIdentifierRepresentsBestSystemKeyboard:(id)a0;
- (char)_panelShouldShowDwellActions:(id)a0;
- (char)_panelShouldShowFunctionKeyPanel:(id)a0;
- (char)_panelShouldShowFunctionKeyPanelByDefault:(id)a0;
- (char)_panelShouldShowHoverTextBar:(id)a0 respectingAllowHoverText:(char)a1;
- (char)_panelShouldShowHoverTextBarByDefault:(id)a0;
- (char)_panelShouldShowSuggestionsBar:(id)a0 respectingAllowSuggestionsBar:(char)a1;
- (id)_panelsToMergeForBasePanel:(id)a0 outGeneratedSystemPanelsBySystemToolbarIdentifier:(id *)a1 outCustomOptionsMapTable:(id *)a2;
- (char)_showUserToolbarPanelBasedOnFrontmostApplication:(id)a0;
- (id)_sortedPanelsToMerge:(id)a0 basePanel:(id)a1 generatedPanelsByIdentifier:(id)a2;
- (unsigned long long)_toolbarSettingForPanel:(id)a0 toolbarIdentifier:(id)a1;
- (void)_updateMergedPanelsIfNeeded;
- (void)_updateToolbarSetting:(unsigned long long)a0 forPanel:(id)a1 toolbarIdentifier:(id)a2;
- (id)initWithPanelCollection:(id)a0;
- (void)panelCollectionUpdated;
- (id)toolbarConfigurationsForPanel:(id)a0;
- (id)toolbarMergedPanelForIdentifier:(id)a0;
- (id)toolbarMergedPanelForListPanelIdentifier:(id)a0 indexPath:(id)a1 dataSource:(id)a2;
- (id)toolbarMergedPanelForPanel:(id)a0;
- (void)updateAllowSuggestionsBar:(char)a0 allowHoverText:(char)a1;
- (void)updateToolbarsForFrontmostApplicationIdentifier:(id)a0;
- (void)updateVisibility:(char)a0 toolbarConfiguration:(id)a1 panel:(id)a2;

@end
