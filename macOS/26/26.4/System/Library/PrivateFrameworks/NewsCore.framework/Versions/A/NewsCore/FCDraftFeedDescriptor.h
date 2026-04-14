@class NSString, FCTagChannelPickerConfiguration;
@protocol FCChannelProviding;

@interface FCDraftFeedDescriptor : FCFeedDescriptor {
    BOOL _feedIsSponsored;
    FCTagChannelPickerConfiguration *_channelPickerConfiguration;
}

@property (readonly, nonatomic) id<FCChannelProviding> channel;
@property (readonly, nonatomic) NSString *articleListID;
@property (readonly, nonatomic) NSString *issueListID;

- (id)name;
- (void).cxx_destruct;
- (long long)feedType;
- (BOOL)feedIsSponsored;
- (id)backingChannel;
- (id)backingTag;
- (id)channelPickerConfiguration;
- (id)initWithChannel:(id)a0 articleListID:(id)a1 issueListID:(id)a2;
- (void)setFeedIsSponsored:(BOOL)a0;

@end
