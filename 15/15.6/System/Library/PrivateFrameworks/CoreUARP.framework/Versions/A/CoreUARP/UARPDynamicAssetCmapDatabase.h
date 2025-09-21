@class NSObject, NSURL, UARPSuperBinaryAsset, NSMutableArray;
@protocol OS_os_log;

@interface UARPDynamicAssetCmapDatabase : NSObject <NSSecureCoding> {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSMutableArray *_cmapDatabase;
    NSObject<OS_os_log> *_log;
}

@property (class, readonly) char supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)addCmapMapping:(id)a0;
- (char)cleanUpCmapDatabaseFiles;
- (char)cmapDatabaseFileExists;
- (char)createCmapDatabaseFile;
- (char)decomposeUARP;
- (id)expandCrshData:(id)a0 withAppleModelNumber:(id)a1;
- (id)findCmapDatabaseFileUrl;
- (id)findCmapforAppleModel:(id)a0;
- (char)flushToDisk;
- (id)initCmapDatabase:(id)a0;

@end
