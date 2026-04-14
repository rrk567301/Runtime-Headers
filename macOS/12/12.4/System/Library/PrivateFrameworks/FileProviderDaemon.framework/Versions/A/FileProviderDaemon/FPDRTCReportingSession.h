@class NSString, FPDRTCReportingSessionManager;
@protocol FPDRTCReportingObserver;

@interface FPDRTCReportingSession : NSObject {
    NSString *_providerID;
    NSString *_providerVersion;
    FPDRTCReportingSessionManager *_backingManager;
    id<FPDRTCReportingObserver> _observer;
}

- (id)description;
- (void).cxx_destruct;
- (void)setObserver:(id)a0;
- (void)flushMessagesWithCompletion:(id /* block */)a0;
- (id)initWithProviderID:(id)a0 version:(id)a1 manager:(id)a2;
- (void)postReportWithCategory:(unsigned long long)a0 type:(unsigned long long)a1 payload:(id)a2 completion:(id /* block */)a3;
- (id)truncateProviderVersion:(id)a0;
- (BOOL)flushMessagesSynchronouslyWithError:(id *)a0;

@end
