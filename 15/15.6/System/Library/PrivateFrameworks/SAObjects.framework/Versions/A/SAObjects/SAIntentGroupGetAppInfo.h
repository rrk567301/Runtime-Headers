@class NSArray;

@interface SAIntentGroupGetAppInfo : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *appIdentifyingInfo;
@property (nonatomic) char shouldSearchLocallyOnly;

+ (id)getAppInfo;
+ (id)getAppInfoWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
