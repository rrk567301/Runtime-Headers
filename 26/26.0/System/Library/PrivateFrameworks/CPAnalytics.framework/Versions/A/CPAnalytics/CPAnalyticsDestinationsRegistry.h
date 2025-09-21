@class NSArray, NSMutableArray;

@interface CPAnalyticsDestinationsRegistry : NSObject {
    NSMutableArray *_destinations;
}

@property (readonly, nonatomic) NSArray *destinations;

- (void)updateWithConfigurationAtURL:(id)a0 cpAnalyticsInstance:(id)a1;
- (id)_readConfiguration:(id)a0;
- (void)updateWithConfiguration:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)sendToAllDestinations:(id)a0;
- (void)_parseDestinationsFromConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)removePhotoLibraryFromDestinations;
- (void)addDestination:(id)a0;
- (id)init;
- (void)setupWithConfigurationAtURL:(id)a0 cpAnalyticsInstance:(id)a1;
- (id)_destinationClassMap;
- (void).cxx_destruct;
- (void)removeDestination:(id)a0;

@end
