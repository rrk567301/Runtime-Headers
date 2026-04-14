@class NSString;

@interface HDQueryTaskServer : HDStandardTaskServer

@property (class, nonatomic, readonly) NSString *taskIdentifier;

- (id)exportedInterface;
- (id)remoteInterface;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)remote_queryWithEncodedQueryDescriptor:(id)a0 completion:(id /* block */)a1;

@end
