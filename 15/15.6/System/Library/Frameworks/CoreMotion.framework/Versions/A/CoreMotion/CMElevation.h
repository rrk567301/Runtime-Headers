@interface CMElevation : NSObject

+ (char)isElevationAvailable;

- (void)startElevationUpdatesWithHandler:(id /* block */)a0;
- (void)stopElevationUpdates;

@end
