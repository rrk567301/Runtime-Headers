@class NSArray, NSMutableArray;

@interface CPAnalyticsDestinationsRegistry : NSObject {
    NSMutableArray *_destinations;
}

@property (readonly, nonatomic) NSArray *destinations;

- (void)removeDestination:(id)a0;
- (void)updateWithConfiguration:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)sendToAllDestinations:(id)a0;
- (void)addDestination:(id)a0;
- (id)_destinationClassMap;
- (void)_parseDestinationsFromConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (void).cxx_destruct;
- (id)_readConfiguration:(id)a0;
- (void)updateWithConfigurationAtURL:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)removePhotoLibraryFromDestinations;
- (id)init;
- (void)setupWithConfigurationAtURL:(id)a0 cpAnalyticsInstance:(id)a1;

@end
