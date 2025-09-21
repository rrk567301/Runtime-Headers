@class NSDictionary, NSString;

@interface SAIntentGroupAppAuthorizationStatusResponse : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *appAuthorizationStatusMap;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appAuthorizationStatusResponseWithDictionary:(id)a0 context:(id)a1;
+ (id)appAuthorizationStatusResponse;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
