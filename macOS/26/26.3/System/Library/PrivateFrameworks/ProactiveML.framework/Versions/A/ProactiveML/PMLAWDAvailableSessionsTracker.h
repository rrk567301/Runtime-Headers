@class AWDServerConnection;
@protocol PMLAWDMetricQueryDelegate;

@interface PMLAWDAvailableSessionsTracker : PMLAWDBaseTracker {
    id<PMLAWDMetricQueryDelegate> _delegate;
    AWDServerConnection *_awdServerConnection;
}

- (id)init;
- (id)initWithAWDConnection:(id)a0;
- (void).cxx_destruct;
- (void)reportStatsToAWD;
- (void)setAWDMetricQueryDelegate:(id)a0;

@end
