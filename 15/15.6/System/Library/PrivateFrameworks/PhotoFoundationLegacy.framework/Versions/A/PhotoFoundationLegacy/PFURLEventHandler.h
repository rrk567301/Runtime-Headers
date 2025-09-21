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
- (char)handleURL:(id)a0;
- (void)addURLHandlingSubsystem:(id)a0;
- (char)didLaunchRecently;
- (char)hasPendingURLs;
- (id)initWithApplicationLaunchDate:(id)a0;
- (void)resumeHandlerInvocations;
- (void)retryPendingURLs;
- (void)suspendHandlerInvocations;
- (double)timeIntervalSinceLaunch;
- (void)tryToHandleURLs:(id)a0;

@end
