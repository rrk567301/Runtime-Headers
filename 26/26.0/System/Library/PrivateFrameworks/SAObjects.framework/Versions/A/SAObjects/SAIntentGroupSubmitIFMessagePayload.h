@class NSData;

@interface SAIntentGroupSubmitIFMessagePayload : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *data;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
