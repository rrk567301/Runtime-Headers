@class FCPrivateDataController, FCTagChannelPickerConfiguration;

@interface FCPrivateZoneFeedDescriptor : FCFeedDescriptor {
    BOOL _feedIsSponsored;
    long long _feedType;
    FCTagChannelPickerConfiguration *_channelPickerConfiguration;
}

@property (retain, nonatomic) FCPrivateDataController *privateDataController;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (long long)feedType;
- (BOOL)feedIsSponsored;
- (id)backingHeadlineIDs;
- (id)channelPickerConfiguration;
- (id)initWithPrivateDataController:(id)a0 identifier:(id)a1 feedType:(long long)a2;
- (void)setFeedIsSponsored:(BOOL)a0;
- (id)streamOfLatestHeadlinesWithContext:(id)a0;

@end
