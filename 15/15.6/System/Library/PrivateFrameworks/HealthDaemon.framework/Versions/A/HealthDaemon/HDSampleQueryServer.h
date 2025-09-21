@class NSArray;

@interface HDSampleQueryServer : HDBatchedQueryServer {
    char _suspended;
    char _includeAutomaticTimeZones;
    char _includeContributorInformation;
    unsigned long long _limit;
    NSArray *_sortDescriptors;
    NSArray *_queryDescriptors;
}

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (char)supportsAnchorBasedAuthorization;

- (void).cxx_destruct;
- (id)diagnosticDescription;
- (id)objectTypes;
- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (char)validateConfiguration:(id *)a0;

@end
