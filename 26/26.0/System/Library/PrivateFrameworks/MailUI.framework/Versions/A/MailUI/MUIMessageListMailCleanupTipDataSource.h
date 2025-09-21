@class NSString, MUIiCloudMailCleanupService, EMObjectID, NSObject;
@protocol OS_os_log;

@interface MUIMessageListMailCleanupTipDataSource : MessageListSectionDataSource <EFLoggable> {
    EMObjectID *_itemIdentifier;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) long long selectedBucket;
@property (retain, nonatomic) MUIiCloudMailCleanupService *iCloudMailCleanupService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)beginObservingAnimated:(BOOL)a0 nextUpdateNeedsCleanSnapshot:(BOOL)a1;
- (id)initWithConfiguration:(id)a0 bucket:(long long)a1 iCloudMailCleanupService:(id)a2;

@end
