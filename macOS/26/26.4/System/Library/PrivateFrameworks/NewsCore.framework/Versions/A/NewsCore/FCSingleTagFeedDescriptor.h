@class NSString, FCTagChannelPickerConfiguration;
@protocol FCTagProviding;

@interface FCSingleTagFeedDescriptor : FCFeedDescriptor {
    BOOL _feedIsSponsored;
    long long _feedType;
    long long _feedSortMethod;
    unsigned long long _feedFilterOptions;
    long long _feedPersonalizationConfigurationSet;
    unsigned long long _feedConfiguration;
    NSString *_referringFeedItemIdentifier;
    FCTagChannelPickerConfiguration *_channelPickerConfiguration;
}

@property (copy, nonatomic) id<FCTagProviding> tag;
@property (readonly, copy, nonatomic) id<FCTagProviding> masterTag;

- (id)theme;
- (id)iAdKeywords;
- (id)name;
- (id)iAdCategories;
- (long long)feedPersonalizationConfigurationSet;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)feedConfiguration;
- (BOOL)isSubscribable;
- (BOOL)hideAccessoryText;
- (long long)feedType;
- (BOOL)feedIsSponsored;
- (void)setReferringFeedItemIdentifier:(id)a0;
- (id)backingChannel;
- (id)backingChannelID;
- (id)backingSectionID;
- (id)backingTag;
- (id)backingTopicID;
- (id)channelPickerConfiguration;
- (unsigned long long)feedFilterOptions;
- (long long)feedSortMethod;
- (BOOL)hasNotificationsEnabledWithSubscriptionController:(id)a0;
- (long long)iAdContentProvider;
- (id)iAdFeedID;
- (id)iAdPrimaryAudience;
- (id)iAdSectionID;
- (id)initWithContext:(id)a0 tag:(id)a1 feedConfiguration:(unsigned long long)a2;
- (id)initWithContext:(id)a0 tag:(id)a1 feedConfiguration:(unsigned long long)a2 referringFeedItemIdentifier:(id)a3;
- (id)initWithContext:(id)a0 tag:(id)a1 feedConfiguration:(unsigned long long)a2 referringFeedItemIdentifier:(id)a3 channelPickerConfiguration:(id)a4;
- (id)initWithContext:(id)a0 tag:(id)a1 sortMethod:(long long)a2 filterOptions:(unsigned long long)a3 personalizationConfigurationSet:(long long)a4 feedConfiguration:(unsigned long long)a5 referringFeedItemIdentifier:(id)a6 channelPickerConfiguration:(id)a7;
- (BOOL)isSubscribedToWithSubscriptionController:(id)a0;
- (id)referringFeedItemIdentifier;
- (void)setFeedIsSponsored:(BOOL)a0;

@end
