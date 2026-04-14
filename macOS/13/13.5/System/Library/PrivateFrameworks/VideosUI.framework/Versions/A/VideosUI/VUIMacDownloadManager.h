@class NSMutableSet;

@interface VUIMacDownloadManager : NSObject

@property (retain, nonatomic) NSMutableSet *downloadItemIDs;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addDownloadItem:(id)a0;
- (BOOL)isItemInDownloadingQueue:(id)a0;
- (void)removeDownloadItem:(id)a0;

@end
