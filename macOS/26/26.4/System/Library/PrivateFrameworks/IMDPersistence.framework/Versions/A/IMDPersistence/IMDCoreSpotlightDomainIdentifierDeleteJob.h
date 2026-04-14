@class NSArray;

@interface IMDCoreSpotlightDomainIdentifierDeleteJob : IMDCoreSpotlightBaseIndexingJob

@property (retain, nonatomic) NSArray *deletedDomainIdentifiers;

- (void).cxx_destruct;
- (void)runWithCompletion:(id /* block */)a0;
- (void)_startJob;

@end
