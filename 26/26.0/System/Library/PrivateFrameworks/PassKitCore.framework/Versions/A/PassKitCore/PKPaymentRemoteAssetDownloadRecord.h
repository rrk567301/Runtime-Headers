@class NSURL, NSString, NSDictionary;

@interface PKPaymentRemoteAssetDownloadRecord : PKPaymentBackgroundDownloadRecord <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *passURL;
@property (copy, nonatomic) NSString *pushTopic;
@property (readonly, nonatomic) NSDictionary *remoteAssetsByTaskIdentifier;
@property (readonly, nonatomic) NSDictionary *failedRequiredRemoteAssetDownloadsByTaskIdentifier;
@property (readonly, nonatomic) NSDictionary *remoteAssetsByRecordName;
@property (readonly, nonatomic) NSDictionary *failedRequiredRemoteAssetDownloadsByRecordName;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasFailedRequiredRemoteAssetDownloads;
- (BOOL)hasOutstandingRemoteAssetTasks;
- (void)removeRemoteCloudStoreAssetForRecordName:(id)a0 didFail:(BOOL)a1;
- (void)removeRemoteURLAssetForTaskIdentifier:(id)a0 didFail:(BOOL)a1;
- (void)setRemoteCloudStoreAsset:(id)a0 forRecordName:(id)a1;
- (void)setRemoteURLAsset:(id)a0 forTaskIdentifier:(id)a1;

@end
