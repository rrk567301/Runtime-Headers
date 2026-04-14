@class NSArray;

@interface HDSampleQueryServer : HDBatchedQueryServer {
    BOOL _suspended;
    BOOL _includeAutomaticTimeZones;
    BOOL _includeContributorInformation;
    unsigned long long _limit;
    NSArray *_sortDescriptors;
    NSArray *_queryDescriptors;
}

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (BOOL)supportsAnchorBasedAuthorization;

- (id)diagnosticDescription;
- (void)_queue_start;
- (id)objectTypes;
- (BOOL)validateConfiguration:(id *)a0;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;

@end
