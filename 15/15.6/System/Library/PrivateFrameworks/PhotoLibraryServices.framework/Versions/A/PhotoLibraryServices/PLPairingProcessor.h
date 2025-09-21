@class NSPredicate;

@interface PLPairingProcessor : NSObject

@property (retain, nonatomic) NSPredicate *locatedInUsersPhotoLibrary;

- (id)init;
- (void).cxx_destruct;
- (char)_copyFromURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (char)_copyResourceOfType:(unsigned int)a0 onAsset:(id)a1 toType:(unsigned int)a2 onAsset:(id)a3 error:(id *)a4;
- (void)_deleteResourceOfType:(unsigned int)a0 forAsset:(id)a1 verifyInserted:(char)a2 deleteFile:(char)a3;
- (id)combinePair:(id)a0 error:(id *)a1;
- (id)fetchRequestForLibrary;
- (id)fetchRequestForSortedGroupIDs:(id)a0;
- (id)firstGroupFromAssets:(id)a0;
- (id)groupIDForAsset:(id)a0;
- (char)processPairingForFetchRequest:(id)a0 inContext:(id)a1 error:(id *)a2;
- (void)setDeferredProcessingIfNescessaryForAsset:(id)a0;
- (char)updatePrimaryAsset:(id)a0 andRemoveAssetIfPossible:(id)a1;

@end
