@class BMSource;

@interface CSDonationProgressStreamRecorder : NSObject

@property (retain, nonatomic) BMSource *streamSource;
@property (readonly, nonatomic) BOOL donationPermitted;

- (void).cxx_destruct;
- (id)_convertDonationProgressToBiomeEvent:(id)a0 bundleID:(id)a1 clientIndexName:(id)a2;
- (void)deleteDonationProgressReportsForDeletedBundle:(id)a0;
- (BOOL)donationPermmited;
- (void)writeDonationProgress:(id)a0 bundleID:(id)a1 clientIndexName:(id)a2;

@end
