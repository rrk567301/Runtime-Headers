@class NSString, NSData;

@interface SARDModelInferenceResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *modelInferenceRequestId;
@property (copy, nonatomic) NSData *protobufMessageResponse;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
