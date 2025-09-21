@interface SALocalSearchSetNavigationVoiceMuted : SADomainCommand

@property (nonatomic) char voiceMuted;

+ (id)setNavigationVoiceMuted;
+ (id)setNavigationVoiceMutedWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
