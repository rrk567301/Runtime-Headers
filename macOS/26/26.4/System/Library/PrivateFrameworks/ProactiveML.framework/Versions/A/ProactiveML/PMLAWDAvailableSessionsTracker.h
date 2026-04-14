@class AWDServerConnection;
@protocol PMLAWDMetricQueryDelegate;

@interface PMLAWDAvailableSessionsTracker : PMLAWDBaseTracker {
    id<PMLAWDMetricQueryDelegate> _delegate;
    AWDServerConnection *_awdServerConnection;
}

- (void)reportStatsToAWD;
- (id)initWithAWDConnection:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setAWDMetricQueryDelegate:(id)a0;

@end
