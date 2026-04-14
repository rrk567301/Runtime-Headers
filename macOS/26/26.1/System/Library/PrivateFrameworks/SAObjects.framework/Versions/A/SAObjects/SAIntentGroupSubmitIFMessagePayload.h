@class NSData;

@interface SAIntentGroupSubmitIFMessagePayload : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *data;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
