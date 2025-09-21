@class NSNumber;

@interface SASSetMultilingualDictationConfig : SABaseClientBoundCommand

@property (nonatomic) char multilingualDisabled;
@property (copy, nonatomic) NSNumber *multilingualTimeoutInMillis;

+ (id)setMultilingualDictationConfig;
+ (id)setMultilingualDictationConfigWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
