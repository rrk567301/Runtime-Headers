@class NSString;
@protocol DonationProgressReporting;

@interface CSDonationProgressQueryResult : NSObject

@property (readonly) unsigned long long status;
@property (readonly) NSString *bundleID;
@property (readonly) NSString *indexName;
@property (readonly) id<DonationProgressReporting> donationProgress;

- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 indexName:(id)a1 status:(unsigned long long)a2 donationProgress:(id)a3;

@end
