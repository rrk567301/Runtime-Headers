@class NSURL;

@interface CallDBMetaInfo : NSObject

@property (retain) NSURL *dbInfoPrefFile;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (long long)readDatabaseVersion:(char)a0;
- (char)validateInfo:(char)a0;
- (void)writeDatabaseVersion:(long long)a0 isTemp:(char)a1;

@end
