@class NSArray, NSMutableArray;

@interface CPAnalyticsDestinationsRegistry : NSObject {
    NSMutableArray *_destinations;
}

@property (readonly, nonatomic) NSArray *destinations;

- (void)removePhotoLibraryFromDestinations;
- (void)updateWithConfigurationAtURL:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)addDestination:(id)a0;
- (void)_parseDestinationsFromConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (id)_readConfiguration:(id)a0;
- (void)setupWithConfigurationAtURL:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)removeDestination:(id)a0;
- (void)updateWithConfiguration:(id)a0 cpAnalyticsInstance:(id)a1;
- (id)_destinationClassMap;
- (void)sendToAllDestinations:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
