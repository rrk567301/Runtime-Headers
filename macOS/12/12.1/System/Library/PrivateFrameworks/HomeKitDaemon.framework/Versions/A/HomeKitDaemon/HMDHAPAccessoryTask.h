@class NSArray, HMDHAPAccessoryTaskContext, NSString, NSNumber;

@interface HMDHAPAccessoryTask : NSObject <HMDHAPAccessoryTask>

@property (readonly) HMDHAPAccessoryTaskContext *context;
@property (readonly) NSArray *requests;
@property (readonly) id /* block */ completion;
@property (readonly) NSNumber *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)workQueue;
- (id)activity;
- (void)execute;
- (id)operationName;
- (unsigned long long)sourceType;
- (id)initWithContext:(id)a0 requests:(id)a1 completion:(id /* block */)a2;
- (id)logEventsFromAccessoryRequestMap:(id)a0 accessoryList:(id)a1;

@end
