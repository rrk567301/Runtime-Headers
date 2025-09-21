@class NSObject, NSURL, UARPSuperBinaryAsset, NSMutableArray;
@protocol OS_os_log;

@interface UARPDynamicAssetTmapDatabase : NSObject <NSSecureCoding> {
    NSURL *_url;
    NSURL *_plistURL;
    UARPSuperBinaryAsset *_asset;
    NSMutableArray *_tmapDatabase;
    NSObject<OS_os_log> *_log;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)addTmapMapping:(id)a0;
- (BOOL)cleanUpTmapDatabaseFiles;
- (BOOL)createTmapDatabaseFile;
- (BOOL)decomposeUARP;
- (id)expandMticData:(id)a0 withEventID:(unsigned int)a1 appleModelNumber:(id)a2;
- (id)expandMticData:(id)a0 withEventID:(unsigned int)a1 appleModelNumber:(id)a2 serialNumber:(id)a3;
- (id)findTmapDatabaseFileUrl;
- (id)findTmapforAppleModel:(id)a0;
- (BOOL)flushToDisk;
- (id)initTmapDatabase:(id)a0;
- (id)initTmapDatabaseWithPlist:(id)a0;
- (id)initWithUrl:(id)a0;
- (BOOL)loadPlist;
- (BOOL)tmapDatabaseFileExists;

@end
