@class NSString, PLAdditionalAssetAttributes;

@interface PLAssetDescription : PLManagedObject

@property (retain, nonatomic) NSString *longDescription;
@property (retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes;

+ (id)entityName;
+ (id)listOfSyncedProperties;

- (void)prepareForDeletion;
- (void)willSave;
- (id)payloadID;
- (id)payloadForChangedKeys:(id)a0;
- (BOOL)isSyncableChange;

@end
