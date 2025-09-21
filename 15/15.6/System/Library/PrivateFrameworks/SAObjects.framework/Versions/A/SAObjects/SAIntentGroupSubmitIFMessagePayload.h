@class NSData;

@interface SAIntentGroupSubmitIFMessagePayload : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *data;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
