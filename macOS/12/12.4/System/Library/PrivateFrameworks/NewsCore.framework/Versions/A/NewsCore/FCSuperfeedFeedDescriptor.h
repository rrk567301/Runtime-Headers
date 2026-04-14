@class FCFeedDescriptor;

@interface FCSuperfeedFeedDescriptor : FCFeedDescriptor

@property (readonly, nonatomic) FCFeedDescriptor *defaultSectionFeed;

- (id)name;
- (void).cxx_destruct;
- (long long)feedType;
- (id)backingTag;
- (id)backingChannel;
- (long long)feedSortMethod;
- (long long)feedFilterOptions;
- (long long)feedPersonalizationConfigurationSet;
- (id)initWithDefaultSection:(id)a0;

@end
