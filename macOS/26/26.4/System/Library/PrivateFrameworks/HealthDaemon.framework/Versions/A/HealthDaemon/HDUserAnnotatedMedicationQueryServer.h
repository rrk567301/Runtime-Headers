@interface HDUserAnnotatedMedicationQueryServer : HDQueryServer {
    unsigned long long _limit;
}

+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (Class)queryClass;
+ (id)requiredEntitlements;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;

@end
