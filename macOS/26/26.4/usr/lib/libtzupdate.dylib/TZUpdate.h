@class TZFileSystemInterface, NSXPCConnection;

@interface TZUpdate : NSObject

@property (retain) TZFileSystemInterface *fileSystemInterface;
@property (retain) NSXPCConnection *connectionToService;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isUpdateWaiting;
- (id)affectedZones;
- (BOOL)alertForAllZones;
- (id)createNewXPCConnection;
- (id)currentTZDataVersion;
- (void)isUpdateWaitingWithCompletion:(id /* block */)a0;
- (void)purgeAllAssetsWithCompletion:(id /* block */)a0;
- (id)updateTZDataVersion;

@end
