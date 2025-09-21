@class NSArray, NSString;

@interface SAMultiUserInfo : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *homeMembers;
@property (copy, nonatomic) NSArray *multiUserPitchComposition;
@property (nonatomic) char voiceProfilesAreInFlight;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)multiUserInfo;
+ (id)multiUserInfoWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
