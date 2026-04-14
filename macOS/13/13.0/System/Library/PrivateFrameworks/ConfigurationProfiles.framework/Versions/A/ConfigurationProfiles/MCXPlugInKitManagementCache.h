@class NSArray, NSMutableDictionary, NSDate;

@interface MCXPlugInKitManagementCache : NSObject

@property int ourPlugInKitPayloadChangeCount;
@property (copy) NSArray *rules;
@property int ourFamilyControlsChangeCount;
@property BOOL haveAppLaunchRestrictions;
@property (copy) NSDate *lastLSPlugInQueryDate;
@property (copy) NSArray *allLSPlugIns;
@property (retain) NSMutableDictionary *localizedNamesByExtensionID;

+ (id)sharedObject;

- (void)dealloc;
- (id)init;
- (id)findLSPlugInByExtensionID:(id)a0;
- (id)localizedNameForExtensionID:(id)a0;
- (void)reloadFamilyControls;
- (void)reloadPlugInKitSettings;
- (void)reloadIfNeeded;
- (id)debugEffectiveSettings;
- (id)extensionPointForExtensionIdentifier:(id)a0;
- (id)explicitDeniedExtensionPointsForRule:(id)a0;
- (id)implicitDeniedExtensionPointsForRule:(id)a0;
- (BOOL)denyExtensionID:(id)a0 extensionPoint:(id)a1 basedOnRule:(id)a2;
- (BOOL)denyExtensionID:(id)a0 extensionPoint:(id)a1;

@end
