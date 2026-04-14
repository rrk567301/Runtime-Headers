@class NSString, NSDictionary, NSArray, NSMutableSet;

@interface CSEventListenerConfig : NSObject {
    NSMutableSet *_positiveSet;
    NSMutableSet *_negativeSet;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *taskIdentifier;
@property (copy, nonatomic) NSDictionary *taskOptions;
@property (nonatomic) BOOL requirePriorityItems;
@property (nonatomic) BOOL requireBacklogItems;
@property (nonatomic) BOOL supportsDeletedItems;
@property (copy, nonatomic) NSArray *includeBundleIDs;
@property (copy, nonatomic) NSArray *excludeBundleIDs;
@property (copy, nonatomic) NSArray *includeContentTypes;
@property (copy, nonatomic) NSArray *excludeContentTypes;
@property (copy, nonatomic) NSArray *requiredAttributes;
@property (nonatomic) unsigned long long eventFlags;

- (void).cxx_destruct;
- (BOOL)supportsContentType:(id)a0;
- (BOOL)supportsBundleID:(id)a0;

@end
