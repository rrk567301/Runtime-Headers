@class NSArray;

@interface HDUserTrackedConceptQueryServer : HDQueryServer {
    NSArray *_sortDescriptors;
}

+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (Class)queryClass;
+ (id)requiredEntitlements;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;

@end
