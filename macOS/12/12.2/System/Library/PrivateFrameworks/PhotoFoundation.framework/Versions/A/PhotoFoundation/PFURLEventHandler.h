@class NSArray, NSHashTable, NSDate, NSMutableArray;

@interface PFURLEventHandler : NSObject {
    NSMutableArray *_pendingURLs;
}

@property (retain) NSDate *applicationLaunchDate;
@property (retain) NSHashTable *urlHandlingSubsystems;
@property long long suspendCount;
@property (readonly, copy, nonatomic) NSArray *pendingURLs;

- (id)init;
- (void).cxx_destruct;
- (BOOL)handleURL:(id)a0;
- (id)initWithApplicationLaunchDate:(id)a0;
- (void)suspendHandlerInvocations;
- (void)resumeHandlerInvocations;
- (void)addURLHandlingSubsystem:(id)a0;
- (void)tryToHandleURLs:(id)a0;
- (BOOL)hasPendingURLs;
- (void)retryPendingURLs;
- (double)timeIntervalSinceLaunch;
- (BOOL)didLaunchRecently;

@end
