@class NSString;

@interface SASidekickHubDeviceInfo : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *accessoryIdentifier;
@property (copy, nonatomic) NSString *hubDeviceType;
@property (copy, nonatomic) NSString *hubUserId;
@property (nonatomic) char mediaPlaybackEnabled;
@property (copy, nonatomic) NSString *sidekickBrand;
@property (copy, nonatomic) NSString *sidekickDeviceType;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
