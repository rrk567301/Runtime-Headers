@class NSArray;

@interface HDSampleCountQueryServer : HDQueryServer {
    NSArray *_queryDescriptors;
}

+ (Class)queryClass;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;
- (void)_queue_start;

@end
