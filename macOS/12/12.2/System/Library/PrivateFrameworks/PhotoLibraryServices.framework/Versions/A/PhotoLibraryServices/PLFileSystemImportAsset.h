@class NSSet, NSString, NSMutableSet, NSObject, PLAssetJournalEntryPayload;
@protocol PLAlbumProtocol;

@interface PLFileSystemImportAsset : NSObject {
    NSString *_path;
    BOOL _pathContainsDCIM;
    NSMutableSet *_urls;
}

@property (retain, nonatomic) NSObject<PLAlbumProtocol> *destinationAlbum;
@property (nonatomic) int assetKind;
@property (readonly, nonatomic) NSSet *urls;
@property (readonly, nonatomic) PLAssetJournalEntryPayload *assetPayload;

- (id)description;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isCameraKit;
- (id)initWithDestinationAlbum:(id)a0 assetKind:(int)a1;
- (id)initWithAssetPayload:(id)a0;
- (void)addURL:(id)a0;
- (void)addURLs:(id)a0;

@end
