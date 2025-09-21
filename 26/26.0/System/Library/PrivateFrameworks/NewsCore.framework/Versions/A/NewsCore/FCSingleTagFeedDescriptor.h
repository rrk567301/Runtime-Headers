@class NSString;
@protocol FCTagProviding;

@interface FCSingleTagFeedDescriptor : FCFeedDescriptor {
    long long _feedType;
    long long _feedSortMethod;
    unsigned long long _feedFilterOptions;
    long long _feedPersonalizationConfigurationSet;
    unsigned long long _feedConfiguration;
    NSString *_referringFeedItemIdentifier;
}

@property (copy, nonatomic) id<FCTagProviding> tag;
@property (readonly, copy, nonatomic) id<FCTagProviding> masterTag;

- (id)iAdKeywords;
- (id)iAdCategories;
- (long long)feedType;
- (BOOL)hideAccessoryText;
- (id)theme;
- (BOOL)isSubscribable;
- (long long)feedPersonalizationConfigurationSet;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)feedConfiguration;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setReferringFeedItemIdentifier:(id)a0;
- (id)backingChannel;
- (id)backingChannelID;
- (id)backingSectionID;
- (id)backingTag;
- (id)backingTopicID;
- (unsigned long long)feedFilterOptions;
- (long long)feedSortMethod;
- (BOOL)hasNotificationsEnabledWithSubscriptionController:(id)a0;
- (long long)iAdContentProvider;
- (id)iAdFeedID;
- (id)iAdPrimaryAudience;
- (id)iAdSectionID;
- (id)initWithContext:(id)a0 tag:(id)a1 feedConfiguration:(unsigned long long)a2;
- (id)initWithContext:(id)a0 tag:(id)a1 feedConfiguration:(unsigned long long)a2 referringFeedItemIdentifier:(id)a3;
- (id)initWithContext:(id)a0 tag:(id)a1 sortMethod:(long long)a2 filterOptions:(unsigned long long)a3 personalizationConfigurationSet:(long long)a4 feedConfiguration:(unsigned long long)a5;
- (id)initWithContext:(id)a0 tag:(id)a1 sortMethod:(long long)a2 filterOptions:(unsigned long long)a3 personalizationConfigurationSet:(long long)a4 feedConfiguration:(unsigned long long)a5 referringFeedItemIdentifier:(id)a6;
- (BOOL)isSubscribedToWithSubscriptionController:(id)a0;
- (id)referringFeedItemIdentifier;

@end
