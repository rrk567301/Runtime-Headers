@class NSString, PHLibraryScope, PHCollectionList, NSSortDescriptor, PHPhotoLibrary, PHAssetCollection, PHImportSource, NSMutableDictionary;

@interface PHImportOptions : NSObject {
    struct options_bits { unsigned char preserveFolderStructure : 1; unsigned char hideProgress : 1; unsigned char skipAlertWhenFinished : 1; unsigned char referencedImport : 1; unsigned char allowDuplicates : 1; unsigned char skipDiskSpaceCheck : 1; unsigned char deleteAfterImport : 1; unsigned char metadataAddMode : 1; unsigned char omitImportComplete : 1; unsigned char allowUnsupported : 1; unsigned char fileOperation : 3; unsigned char importedBy : 8; unsigned char moveToSharedLibrary : 1; } _options_bits;
}

@property (retain, nonatomic) NSString *personId;
@property (retain, nonatomic) PHImportSource *importSource;
@property (retain, nonatomic) PHPhotoLibrary *library;
@property (nonatomic) short importedBy;
@property (nonatomic) char omitImportComplete;
@property (nonatomic) char allowUnsupported;
@property (retain, nonatomic) PHLibraryScope *libraryScope;
@property (retain, nonatomic) PHAssetCollection *destinationAlbum;
@property (retain, nonatomic) PHCollectionList *destinationFolder;
@property (nonatomic) char preserveFolderStructure;
@property (nonatomic) char hideProgress;
@property (nonatomic) char skipAlertWhenFinished;
@property (nonatomic) char shouldImportAsReferenced;
@property (nonatomic) char allowDuplicates;
@property (nonatomic) char skipDiskSpaceCheck;
@property (nonatomic) char deleteAfterImport;
@property (nonatomic) unsigned char fileOperation;
@property (retain, nonatomic) NSSortDescriptor *sortDescriptor;
@property (nonatomic) unsigned char metadataAddMode;
@property (retain, nonatomic) NSMutableDictionary *userIptcMetadata;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
