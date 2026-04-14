@class NSData;

@interface IMDCoreSpotlightClientStateFetchJob : IMDCoreSpotlightBaseIndexingJob

@property (retain, nonatomic) NSData *clientStateData;

- (void).cxx_destruct;
- (void)runWithCompletion:(id /* block */)a0;
- (void)_startJob;

@end
