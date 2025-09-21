@class NSObject, NSURL, UARPSuperBinaryAsset, NSMutableArray;
@protocol OS_os_log;

@interface UARPDynamicAssetTmapDatabase : NSObject <NSSecureCoding> {
    NSURL *_url;
    UARPSuperBinaryAsset *_asset;
    NSMutableArray *_tmapDatabase;
    NSObject<OS_os_log> *_log;
}

@property (class, readonly) char supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)addTmapMapping:(id)a0;
- (char)cleanUpTmapDatabaseFiles;
- (char)createTmapDatabaseFile;
- (char)decomposeUARP;
- (id)expandMticData:(id)a0 withEventID:(unsigned int)a1 appleModelNumber:(id)a2;
- (id)findTmapDatabaseFileUrl;
- (id)findTmapforAppleModel:(id)a0;
- (char)flushToDisk;
- (id)initTmapDatabase:(id)a0;
- (char)tmapDatabaseFileExists;

@end
