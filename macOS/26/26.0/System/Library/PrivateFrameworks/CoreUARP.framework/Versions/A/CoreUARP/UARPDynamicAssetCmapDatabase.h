@class NSObject, NSURL, UARPSuperBinaryAsset, NSMutableArray;
@protocol OS_os_log;

@interface UARPDynamicAssetCmapDatabase : NSObject <NSSecureCoding> {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSMutableArray *_cmapDatabase;
    NSObject<OS_os_log> *_log;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)addCmapMapping:(id)a0;
- (BOOL)cleanUpCmapDatabaseFiles;
- (BOOL)cmapDatabaseFileExists;
- (BOOL)createCmapDatabaseFile;
- (BOOL)decomposeUARP;
- (id)expandCrshData:(id)a0 withAppleModelNumber:(id)a1;
- (id)findCmapDatabaseFileUrl;
- (id)findCmapforAppleModel:(id)a0;
- (BOOL)flushToDisk;
- (id)initCmapDatabase:(id)a0;

@end
