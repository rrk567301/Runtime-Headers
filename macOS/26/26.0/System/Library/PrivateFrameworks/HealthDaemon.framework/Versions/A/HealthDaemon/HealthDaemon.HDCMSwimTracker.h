@interface HealthDaemon.HDCMSwimTracker : NSObject <HealthDaemon.HDCMSwimTrackerProxy>

- (void)stopUpdates;
- (id)init;
- (void)startUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)querySwimUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;

@end
