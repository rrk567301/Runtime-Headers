@class NSXPCConnection;

@interface NetworkPerformanceQuery : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)_formatInstantRouteMetrics:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)currentScorecardFor:(int)a0 queue:(id)a1 reply:(id /* block */)a2;

@end
