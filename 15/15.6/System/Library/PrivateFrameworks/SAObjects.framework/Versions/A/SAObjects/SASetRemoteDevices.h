@class NSArray, NSString;

@interface SASetRemoteDevices : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char remoteDeviceHasNoAssistantId;
@property (nonatomic) char remoteDeviceNotSetup;
@property (nonatomic) char remoteDeviceUnreachable;
@property (copy, nonatomic) NSArray *remoteDevices;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)setRemoteDevices;
+ (id)setRemoteDevicesWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
