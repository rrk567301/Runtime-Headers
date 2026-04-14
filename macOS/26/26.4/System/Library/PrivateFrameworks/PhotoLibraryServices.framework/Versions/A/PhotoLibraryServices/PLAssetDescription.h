@class NSString, PLAdditionalAssetAttributes;

@interface PLAssetDescription : PLManagedObject

@property (retain, nonatomic) NSString *longDescription;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;

+ (id)entityName;
+ (id)listOfSyncedProperties;

- (id)payloadID;
- (BOOL)isSyncableChange;
- (id)payloadForChangedKeys:(id)a0;
- (void)willSave;
- (void)prepareForDeletion;
- (id)duplicateSortPropertyNamesSkip;
- (id)duplicateSortPropertyNames;

@end
