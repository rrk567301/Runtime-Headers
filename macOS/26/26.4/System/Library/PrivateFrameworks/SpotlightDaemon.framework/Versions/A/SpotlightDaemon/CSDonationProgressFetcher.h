@class NSString;

@interface CSDonationProgressFetcher : NSObject <CSDonationProgressFetching>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchDonationProgressForBundles:(id)a0 completionHandler:(id /* block */)a1;

@end
