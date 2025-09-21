@interface SASettingSetValue : SASettingCommand

@property (nonatomic) char dryRun;
@property (nonatomic) char failOnSiriDisconnectWarnings;

+ (id)setValue;
+ (id)setValueWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
