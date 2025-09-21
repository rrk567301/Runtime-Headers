@class NSDictionary, NSString;

@interface FCForYouGroupsConfiguration : NSObject {
    NSString *_configuration;
}

@property (copy, nonatomic) NSDictionary *groupConfigurationsByIdentifier;
@property (readonly, nonatomic) double weekendGreatStoriesYouMissedTimeRange;

+ (id)_groupIdentifiersByType;

- (id)initWithJSONConfiguration:(id)a0;
- (unsigned long long)_defaultPrecedingGroupsCount:(long long)a0;
- (id)configurationForGroupType:(long long)a0;
- (id)_identifierForGroupType:(long long)a0;
- (unsigned long long)hash;
- (unsigned long long)_defaultGroupPositionValueForGroupType:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)_defaultAllowsNativeAdsValueForGroupType:(long long)a0;
- (void).cxx_destruct;

@end
