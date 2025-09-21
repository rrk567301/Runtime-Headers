@class NSString, SARemoteDevice, NSData;

@interface SAExecuteOnRemoteRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *personaAccessLevel;
@property (copy, nonatomic) NSString *personaId;
@property (retain, nonatomic) SARemoteDevice *remoteDevice;
@property (nonatomic) char requiresResponseFromRemote;
@property (copy, nonatomic) NSData *serializedCommand;
@property (nonatomic) char shouldFallbackOnAWDL;
@property (nonatomic) char suppressResponse;
@property (nonatomic) char useGuaranteedDelivery;

+ (id)executeOnRemoteRequest;
+ (id)executeOnRemoteRequestWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
