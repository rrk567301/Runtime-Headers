@class NSArray, NSString;

@interface SAAppsAppSearchResponse : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *foundApps;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appSearchResponseWithDictionary:(id)a0 context:(id)a1;
+ (id)appSearchResponse;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
