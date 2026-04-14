@class NSArray, HKQueryAnchor;

@interface HDUserDomainConceptQueryServer : HDQueryServer {
    long long _limit;
    NSArray *_sortDescriptors;
    HKQueryAnchor *_anchor;
}

+ (Class)queryClass;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;
- (void)_queue_start;

@end
