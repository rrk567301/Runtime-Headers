@class CCDictionaryLog, CCDataSite, NSURL, CCDataResourceWriteAccess, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CCDataSiteManager : NSObject {
    NSURL *_rootDirectoryURL;
    NSObject<OS_dispatch_queue> *_queue;
    CCDictionaryLog *_managerInfo;
    CCDataSite *_dataSite;
    NSString *_localDeviceId;
}

@property (readonly, nonatomic) CCDataResourceWriteAccess *writeAccess;

+ (id)defaultManager;

- (void).cxx_destruct;
- (BOOL)clearAllState;
- (BOOL)_loadDataSites;
- (BOOL)_loadOrCreateDefaultDataSite;
- (void)_loadOrCreateManagerInfo;
- (BOOL)_resetRootDirectory;
- (id)initWithRootDirectoryURL:(id)a0;
- (BOOL)prepareDataResourceForSet:(id)a0;

@end
