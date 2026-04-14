@class NSData;

@interface SAIntentGroupSubmitIFMessagePayload : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *data;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
