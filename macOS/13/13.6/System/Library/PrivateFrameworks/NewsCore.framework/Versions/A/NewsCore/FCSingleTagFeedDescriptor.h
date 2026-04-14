@protocol FCTagProviding, FCPaidAccessCheckerType;

@interface FCSingleTagFeedDescriptor : FCFeedDescriptor {
    long long _feedType;
    long long _feedSortMethod;
    unsigned long long _feedFilterOptions;
    long long _feedPersonalizationConfigurationSet;
    unsigned long long _feedConfiguration;
}

@property (copy, nonatomic) id<FCTagProviding> tag;
@property (readonly, copy, nonatomic) id<FCTagProviding> masterTag;
@property (retain, nonatomic) id<FCPaidAccessCheckerType> paidAccessChecker;

- (BOOL)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)theme;
- (long long)feedType;
- (unsigned long long)feedConfiguration;
- (BOOL)hideAccessoryText;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)backingChannel;
- (id)backingChannelID;
- (id)backingSectionID;
- (id)backingTag;
- (id)backingTopicID;
- (unsigned long long)feedFilterOptions;
- (long long)feedPersonalizationConfigurationSet;
- (long long)feedSortMethod;
- (BOOL)hasNotificationsEnabledWithSubscriptionController:(id)a0;
- (long long)iAdContentProvider;
- (id)iAdFeedID;
- (id)iAdPrimaryAudience;
- (id)iAdSectionID;
- (id)initWithContext:(id)a0 tag:(id)a1 paidAccessChecker:(id)a2 feedConfiguration:(unsigned long long)a3;
- (id)initWithContext:(id)a0 tag:(id)a1 sortMethod:(long long)a2 filterOptions:(unsigned long long)a3 personalizationConfigurationSet:(long long)a4 paidAccessChecker:(id)a5 feedConfiguration:(unsigned long long)a6;
- (BOOL)isSubscribable;
- (BOOL)isSubscribedToWithSubscriptionController:(id)a0;

@end
