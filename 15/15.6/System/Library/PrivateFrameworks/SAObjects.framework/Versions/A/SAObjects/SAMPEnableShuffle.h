@interface SAMPEnableShuffle : SADomainCommand

@property (nonatomic) char enable;

+ (id)enableShuffle;
+ (id)enableShuffleWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
