@class NSString, PLAdditionalAssetAttributes;

@interface PLAssetDescription : PLManagedObject

@property (retain, nonatomic) NSString *longDescription;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;

+ (id)entityName;
+ (id)listOfSyncedProperties;

- (id)payloadForChangedKeys:(id)a0;
- (void)willSave;
- (id)payloadID;
- (BOOL)isSyncableChange;
- (id)duplicateSortPropertyNames;
- (id)duplicateSortPropertyNamesSkip;
- (void)prepareForDeletion;

@end
