@class NSString, PLAdditionalAssetAttributes;

@interface PLAssetDescription : PLManagedObject

@property (retain, nonatomic) NSString *longDescription;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;

+ (id)entityName;
+ (id)listOfSyncedProperties;

- (void)willSave;
- (id)payloadID;
- (id)payloadForChangedKeys:(id)a0;
- (BOOL)isSyncableChange;
- (id)duplicateSortPropertyNames;
- (id)duplicateSortPropertyNamesSkip;
- (void)prepareForDeletion;

@end
