@interface PodcastsFoundation.SiriDonator : NSObject {
    void /* unknown type, empty encoding */ accountController;
    void /* unknown type, empty encoding */ mediaRequestController;
    void /* unknown type, empty encoding */ backgroundTaskManager;
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ _donationInProgress;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccountController:(id)a0 backgroundTaskManager:(id)a1;
- (void)startDonation;

@end
