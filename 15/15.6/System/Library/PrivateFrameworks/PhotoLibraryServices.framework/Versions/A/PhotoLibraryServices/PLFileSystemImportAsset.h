@class NSMutableSet, NSSet, PLLockedResourceTransferRecovery, NSURL, NSString, NSObject, PLAssetJournalEntryPayload;
@protocol PLAlbumProtocol;

@interface PLFileSystemImportAsset : NSObject {
    NSString *_path;
    char _pathContainsDCIM;
    NSMutableSet *_urls;
}

@property (retain, nonatomic) NSObject<PLAlbumProtocol> *destinationAlbum;
@property (nonatomic) int assetKind;
@property (readonly, nonatomic) NSSet *urls;
@property (readonly, nonatomic) PLAssetJournalEntryPayload *assetPayload;
@property (readonly, nonatomic) char isInterruptedLockedResourceTransfer;
@property (readonly, nonatomic) NSURL *lockedResourceTransferMarkerFileURL;
@property (retain, nonatomic) PLLockedResourceTransferRecovery *lockedResourceTransferRecovery;

- (id)description;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)addURL:(id)a0;
- (void)addURLs:(id)a0;
- (id)initWithAssetPayload:(id)a0;
- (id)initWithDestinationAlbum:(id)a0 assetKind:(int)a1;
- (char)isCameraKit;

@end
