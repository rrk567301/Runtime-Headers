@class NSString, NSData;

@interface SARDModelInferenceResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *modelInferenceRequestId;
@property (copy, nonatomic) NSData *protobufMessageResponse;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
