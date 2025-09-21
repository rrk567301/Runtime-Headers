@class NSNumber, NSString;

@interface SASGetMultilingualDictationConfig : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char multilingualDisabled;
@property (copy, nonatomic) NSNumber *multilingualTimeoutInMillis;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getMultilingualDictationConfig;
+ (id)getMultilingualDictationConfigWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
