@class CKAssetDownloadStagingManager, NSString, NSFileHandle, NSNumber, CKAssetDownloadStagingInfo;

@interface CKFileOpenInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *UUID;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) NSNumber *deviceID;
@property (readonly, copy, nonatomic) NSNumber *fileID;
@property (readonly, copy, nonatomic) NSNumber *generationID;
@property (readonly, nonatomic) char shouldReadRawEncryptedData;
@property (readonly, nonatomic) NSFileHandle *fileHandle;
@property (readonly, nonatomic) CKAssetDownloadStagingInfo *assetDownloadStagingInfo;
@property (weak) CKAssetDownloadStagingManager *assetDownloadStagingManager;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPath:(id)a0;
- (id)CKPropertiesDescription;
- (id)initWithUUID:(id)a0 path:(id)a1 deviceID:(id)a2 fileID:(id)a3 generationID:(id)a4 shouldReadRawEncryptedData:(char)a5 fileHandle:(id)a6 assetDownloadStagingInfo:(id)a7;

@end
