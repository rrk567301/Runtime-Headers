@class AWDServerConnection;
@protocol PMLAWDMetricQueryDelegate;

@interface PMLAWDAvailableSessionsTracker : PMLAWDBaseTracker {
    id<PMLAWDMetricQueryDelegate> _delegate;
    AWDServerConnection *_awdServerConnection;
}

- (void)reportStatsToAWD;
- (void)setAWDMetricQueryDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithAWDConnection:(id)a0;
- (id)init;

@end
