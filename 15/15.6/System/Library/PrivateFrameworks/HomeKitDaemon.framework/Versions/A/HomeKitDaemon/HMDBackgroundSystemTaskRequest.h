@class NSString, BGRepeatingSystemTaskRequest;

@interface HMDBackgroundSystemTaskRequest : HMFObject

@property (readonly) BGRepeatingSystemTaskRequest *taskRequest;
@property (readonly, copy) NSString *identifier;
@property (nonatomic) char requiresInexpensiveNetworkConnectivity;
@property (nonatomic) char requiresSignificantUserInactivity;
@property (nonatomic) double interval;
@property (nonatomic) double minDurationBetweenInstances;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)attributeDescriptions;
- (id)initWithTaskRequest:(id)a0;

@end
