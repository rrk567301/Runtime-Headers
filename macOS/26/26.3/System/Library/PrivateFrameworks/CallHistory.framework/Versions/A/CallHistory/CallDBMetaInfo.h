@class NSURL, NSString;

@interface CallDBMetaInfo : NSObject <CallDBMetaInfoProtocol>

@property (copy, nonatomic) NSURL *dbInfoPrefFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)readDatabaseVersion:(BOOL)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)validateInfo:(BOOL)a0;
- (BOOL)writeDatabaseVersion:(long long)a0 isTemp:(BOOL)a1;

@end
