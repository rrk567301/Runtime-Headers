@class NSString, NSArray, NSSet, NSMutableSet, NSNumber;

@interface SpotlightReceiverConfig : NSObject {
    NSMutableSet *_positiveSet;
    NSMutableSet *_negativeSet;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *versionName;
@property (copy, nonatomic) NSNumber *versionValue;
@property (nonatomic) BOOL needsText;
@property (nonatomic) BOOL needsHTML;
@property (nonatomic) BOOL requirePriorityItems;
@property (nonatomic) BOOL requireBacklogItems;
@property (nonatomic) BOOL includeDeletedItems;
@property (nonatomic) BOOL includeLanguage;
@property (copy, nonatomic) NSArray *processes;
@property (copy, nonatomic) NSString *priority;
@property (copy, nonatomic) NSString *supportedQuery;
@property (copy, nonatomic) NSString *unsupportedQuery;
@property (copy, nonatomic) NSArray *bundleIDs;
@property (copy, nonatomic) NSArray *disableBundleIDs;
@property (copy, nonatomic) NSArray *domainIDs;
@property (copy, nonatomic) NSArray *disableDomainIDs;
@property (copy, nonatomic) NSArray *contentTypes;
@property (copy, nonatomic) NSArray *disableContentTypes;
@property (copy, nonatomic) NSArray *donationAttributes;
@property (copy, nonatomic) NSArray *requiredAttributes;
@property (copy, nonatomic) NSArray *optionalAttributes;
@property (copy, nonatomic) NSArray *excludeAttributes;
@property (copy, nonatomic) NSSet *INIntentClassNames;
@property (readonly, nonatomic) long long client;
@property (readonly, nonatomic) NSString *identifier;

- (id)initForClient:(long long)a0;
- (void).cxx_destruct;
- (BOOL)wantsBundleID:(id)a0;
- (BOOL)wantsContentType:(id)a0;
- (BOOL)wantsDomainID:(id)a0;
- (BOOL)wantsINIntentClassNames:(id)a0;

@end
