@class NSString;

@interface SACancelCrossDeviceRequest : SABaseClientBoundCommand

@property (nonatomic) BOOL cancelAssociatedRequests;
@property (copy, nonatomic) NSString *requestId;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
