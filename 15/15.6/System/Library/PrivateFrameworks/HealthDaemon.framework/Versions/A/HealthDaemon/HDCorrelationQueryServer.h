@class NSDictionary;

@interface HDCorrelationQueryServer : HDBatchedQueryServer {
    char _permitPartiallyFilteredCorrelations;
    char _suspended;
}

@property (readonly, nonatomic) NSDictionary *dataFilters;

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;

@end
