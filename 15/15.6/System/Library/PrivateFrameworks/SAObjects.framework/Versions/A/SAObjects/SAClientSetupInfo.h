@interface SAClientSetupInfo : SABaseClientBoundCommand

@property (nonatomic) char delay;
@property (nonatomic) double threshold;

+ (id)clientSetupInfo;
+ (id)clientSetupInfoWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
