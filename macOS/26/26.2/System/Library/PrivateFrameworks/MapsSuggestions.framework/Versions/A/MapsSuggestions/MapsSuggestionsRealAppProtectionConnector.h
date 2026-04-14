@protocol MapsSuggestionsAppProtectionStatusMonitoring;

@interface MapsSuggestionsRealAppProtectionConnector : NSObject <MapsSuggestionsAppProtectionConnector>

@property (weak, nonatomic) id<MapsSuggestionsAppProtectionStatusMonitoring> delegate;

- (void)addMonitor:(id)a0;
- (void).cxx_destruct;

@end
