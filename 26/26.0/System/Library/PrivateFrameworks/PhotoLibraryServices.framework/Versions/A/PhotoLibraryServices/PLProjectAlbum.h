@class NSData, NSString;

@interface PLProjectAlbum : PLManagedAlbum

@property (copy, nonatomic) NSData *projectData;
@property (copy, nonatomic) NSString *projectDocumentType;
@property (copy, nonatomic) NSString *projectExtensionIdentifier;
@property (copy, nonatomic) NSString *projectRenderUuid;

+ (id)entityName;
+ (id)validKindsForPersistence;
+ (id)insertIntoPhotoLibrary:(id)a0 withUUID:(id)a1 documentType:(id)a2 projectExtensionIdentifier:(id)a3;
+ (id)albumSupportsAssetOrderKeysPredicate;
+ (BOOL)cleanupOrphanedProjectPreviewImagesInLibrary:(id)a0 error:(id *)a1;

- (id)payloadForChangedKeys:(id)a0;
- (void)willSave;
- (id)duplicateProjectPreviewImageData:(id)a0 error:(id *)a1;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (BOOL)supportsAssetOrderKeys;
- (id)_previewImageFilename;
- (void)awakeFromInsert;
- (id)projectPreviewImageData;
- (BOOL)setProjectPreviewImageData:(id)a0 error:(id *)a1;
- (void)prepareForDeletion;

@end
