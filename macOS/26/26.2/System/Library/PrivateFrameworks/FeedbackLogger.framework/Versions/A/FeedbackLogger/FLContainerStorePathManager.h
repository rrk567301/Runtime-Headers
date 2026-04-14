@class NSMutableDictionary, FeedbackLoggerFBFClient, NSMutableArray, NSObject;
@protocol OS_os_log;

@interface FLContainerStorePathManager : NSObject

@property (copy, nonatomic) NSMutableDictionary *storeIdToContainerPathMap;
@property (copy, nonatomic) NSMutableArray *sandboxExtensionTokens;
@property (copy, nonatomic) NSMutableDictionary *storeIdToLastSandboxExtensionRequestMap;
@property (retain, nonatomic) FeedbackLoggerFBFClient *fbf;
@property (retain, nonatomic) NSObject<OS_os_log> *log;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)containerPathForStoreId:(id)a0;
- (id)performXPCForContainerPathForStoreId:(id)a0;

@end
