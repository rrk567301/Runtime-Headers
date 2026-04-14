@class NSString, PLAdditionalAssetAttributes;

@interface PLAssetDescription : PLManagedObject

@property (retain, nonatomic) NSString *longDescription;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;

+ (id)entityName;
+ (id)listOfSyncedProperties;

- (void)willSave;
- (BOOL)isSyncableChange;
- (id)duplicateSortPropertyNamesSkip;
- (id)payloadForChangedKeys:(id)a0;
- (void)prepareForDeletion;
- (id)payloadID;
- (id)duplicateSortPropertyNames;

@end
