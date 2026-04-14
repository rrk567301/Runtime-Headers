@class NSString, NSArray, NSNumber;

@interface SpotlightScheduledReceiverConfig : NSObject {
    NSArray *_fetchAttributes;
    NSString *_configDescription;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL requirePriority;
@property (readonly, nonatomic) BOOL requireBacklog;
@property (readonly, nonatomic) BOOL supportsDeletes;
@property (readonly, nonatomic) NSArray *fetchAttributes;
@property (readonly, nonatomic) NSArray *defaultAttributes;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *versionName;
@property (copy, nonatomic) NSNumber *versionValue;
@property (nonatomic) long long options;
@property (nonatomic) BOOL needsHTML;
@property (nonatomic) BOOL needsText;
@property (nonatomic) BOOL needsLanguage;
@property (nonatomic) BOOL needsUserActivities;
@property (nonatomic) BOOL needsDeletes;
@property (copy, nonatomic) NSArray *processes;
@property (copy, nonatomic) NSString *priority;
@property (copy, nonatomic) NSArray *donationAttributes;
@property (copy, nonatomic) NSArray *requiredAttributes;
@property (copy, nonatomic) NSArray *optionalAttributes;
@property (copy, nonatomic) NSArray *excludeAttributes;
@property (copy, nonatomic) NSArray *supportedBundles;
@property (copy, nonatomic) NSArray *unsupportedBundles;
@property (copy, nonatomic) NSArray *supportedDomainIdentifiers;
@property (copy, nonatomic) NSArray *unsupportedDomainIdentifiers;
@property (copy, nonatomic) NSArray *supportedContentTypes;
@property (copy, nonatomic) NSArray *unsupportedContentTypes;
@property (copy, nonatomic) NSString *supportedQuery;
@property (copy, nonatomic) NSString *unsupportedQuery;

- (id)description;
- (void).cxx_destruct;
- (void)_updateAttributes;
- (id)initWithConfigurationValues:(id)a0;

@end
