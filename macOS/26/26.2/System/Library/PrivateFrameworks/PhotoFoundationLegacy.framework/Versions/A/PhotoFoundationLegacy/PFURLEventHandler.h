@class NSArray, NSHashTable, NSDate, NSMutableArray;

@interface PFURLEventHandler : NSObject {
    NSMutableArray *_pendingURLs;
}

@property (retain) NSDate *applicationLaunchDate;
@property (retain) NSHashTable *urlHandlingSubsystems;
@property long long suspendCount;
@property (readonly, copy, nonatomic) NSArray *pendingURLs;

- (BOOL)handleURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addURLHandlingSubsystem:(id)a0;
- (BOOL)didLaunchRecently;
- (BOOL)hasPendingURLs;
- (id)initWithApplicationLaunchDate:(id)a0;
- (void)resumeHandlerInvocations;
- (void)retryPendingURLs;
- (void)suspendHandlerInvocations;
- (double)timeIntervalSinceLaunch;
- (void)tryToHandleURLs:(id)a0;

@end
