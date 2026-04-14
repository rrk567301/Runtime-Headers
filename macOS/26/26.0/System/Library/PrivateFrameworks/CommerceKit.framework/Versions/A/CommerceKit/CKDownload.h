@class CKDownloadStatus, NSArray, NSString, NSURL, CKStoreClient, NSDictionary;

@interface CKDownload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CKStoreClient *storeClient;
@property (readonly) NSURL *cancelURL;
@property (readonly) NSArray *assets;
@property (copy) NSString *downloadQueueIdentifier;
@property (retain) CKDownloadStatus *status;
@property (readonly) NSString *identifier;
@property (readonly) NSString *itemIdentifier;
@property (readonly) NSString *versionIdentifier;
@property (readonly) unsigned long long primaryAssetSize;
@property (readonly) NSDictionary *metadata;
@property (copy) NSString *installedVersionIdentifier;
@property unsigned char priority;
@property BOOL decryptAsset;
@property BOOL verifyAsset;

- (void)pause;
- (void)cancel;
- (void)encodeWithCoder:(id)a0;
- (void)finish;
- (void)resume;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithStoreClient:(id)a0 purchaseResponseDictionary:(id)a1;

@end
