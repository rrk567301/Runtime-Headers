@class NSURL;

@interface CallDBMetaInfo : NSObject

@property (copy, nonatomic) NSURL *dbInfoPrefFile;

- (void)reset;
- (void)writeDatabaseVersion:(long long)a0 isTemp:(BOOL)a1;
- (id)initWithURL:(id)a0;
- (long long)readDatabaseVersion:(BOOL)a0;
- (BOOL)validateInfo:(BOOL)a0;
- (void).cxx_destruct;

@end
