@class NSData, NSString;

@interface SARDRemoteExecutionContextUpdate : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *executionContextUpdate;
@property (copy, nonatomic) NSString *remoteDeviceAssistantId;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
