@protocol FCTagProviding, FCPaidAccessCheckerType;

@interface FCSingleTagFeedDescriptor : FCFeedDescriptor {
    long long _feedType;
    long long _feedSortMethod;
    long long _feedFilterOptions;
    long long _feedPersonalizationConfigurationSet;
    unsigned long long _feedConfiguration;
}

@property (copy, nonatomic) id<FCTagProviding> tag;
@property (readonly, copy, nonatomic) id<FCTagProviding> masterTag;
@property (retain, nonatomic) id<FCPaidAccessCheckerType> paidAccessChecker;

- (id)name;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)theme;
- (long long)feedType;
- (unsigned long long)feedConfiguration;
- (id)iAdCategories;
- (id)iAdKeywords;
- (BOOL)hideAccessoryText;
- (long long)iAdContentProvider;
- (id)iAdPrimaryAudience;
- (id)iAdFeedID;
- (id)iAdSectionID;
- (BOOL)isSubscribable;
- (BOOL)isSubscribedToWithSubscriptionController:(id)a0;
- (BOOL)hasNotificationsEnabledWithSubscriptionController:(id)a0;
- (id)backingTag;
- (id)backingChannel;
- (id)backingChannelID;
- (id)backingSectionID;
- (id)backingTopicID;
- (long long)feedSortMethod;
- (long long)feedFilterOptions;
- (long long)feedPersonalizationConfigurationSet;
- (id)initWithContext:(id)a0 tag:(id)a1 sortMethod:(long long)a2 filterOptions:(long long)a3 personalizationConfigurationSet:(long long)a4 paidAccessChecker:(id)a5 feedConfiguration:(unsigned long long)a6;
- (id)initWithContext:(id)a0 tag:(id)a1 paidAccessChecker:(id)a2 feedConfiguration:(unsigned long long)a3;

@end
