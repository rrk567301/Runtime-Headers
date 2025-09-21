@class NSString;

@interface SACancelCrossDeviceRequest : SABaseClientBoundCommand

@property (nonatomic) char cancelAssociatedRequests;
@property (copy, nonatomic) NSString *requestId;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
