@class NSString, ACSHToolbarOrdering, NSURL, NSArray, NSMutableArray;

@interface ACSHPanelCollection : ACSHPlistObject

@property (class, readonly, nonatomic) NSURL *_applicationSupportDirectoryURL;
@property (class, readonly, nonatomic) NSURL *_switchControlUserPanelCollectionURL;
@property (class, readonly, nonatomic) NSURL *_oldSwitchControlUserPanelCollectionURL;
@property (class, readonly, nonatomic) NSURL *_virtualKeyboardUserPanelCollectionURL;

@property (readonly, nonatomic) NSString *toolbarController_customKeyboardPanelIDForKeyboardLikePanel;
@property (retain, nonatomic) NSMutableArray *_panels;
@property char insertingPanelCollection;
@property (retain, nonatomic) ACSHToolbarOrdering *toolbarOrdering;
@property (retain, nonatomic) NSArray *panels;
@property (readonly, nonatomic) NSArray *allPanelIDs;
@property (readonly, nonatomic) NSArray *allRequiredResourceIDs;
@property (readonly, nonatomic) NSString *defaultKeyboardPanelID;
@property (readonly, nonatomic) NSString *customHomePanelID;
@property (readonly, nonatomic) NSString *defaultPointerPanelID;
@property (readonly, copy, nonatomic) NSArray *userVisiblePanelIDs;
@property (readonly, copy, nonatomic) NSArray *userVisibleToolbarPanelIDs;
@property (readonly, copy, nonatomic) NSArray *userVisibleOpenablePanelIDs;
@property (readonly, nonatomic) char containsCustomHomePanel;
@property (readonly, copy, nonatomic) NSArray *allAssociatedApplications;
@property (nonatomic) unsigned long long productSupportType;

+ (char)_createConfigurationFromTemplatePanelsAtNewURL:(id)a0 productSupportType:(unsigned long long)a1 error:(id *)a2;
+ (char)_shouldLoadPanel:(id)a0 matchingProductSupportType:(unsigned long long)a1;
+ (unsigned long long)productSupportTypeFromUserPanelCollectionURL:(id)a0;
+ (id)switchControlUserPanelCollectionURLCreateIfMissing:(char)a0;
+ (id)userPanelCollectionURLForProductSupportType:(unsigned long long)a0 createIfMissing:(char)a1;
+ (id)virtualKeyboardUserPanelCollectionURLCreateIfMissing:(char)a0;

- (id)init;
- (void).cxx_destruct;
- (void)associatePanel:(id)a0 withApplication:(id)a1;
- (char)_insertPanel:(id)a0 atIndex:(long long)a1 notifying:(char)a2;
- (void)_configureWithPlistDictionary:(id)a0;
- (char)_removePanel:(id)a0 notifying:(char)a1;
- (id)_userPanelIDsVisibleOnly:(char)a0 containsDefaultKeyboard:(char *)a1;
- (void)addPanelsFromCollection:(id)a0;
- (id)associatedPanelForApplicationWithBundleID:(id)a0;
- (id)dictionaryForSaving;
- (void)insertPanel:(id)a0 atIndex:(long long)a1;
- (id)panelForIdentifier:(id)a0;
- (void)removePanel:(id)a0;
- (id)userPanelIDsVisibleOnly:(char)a0;

@end
