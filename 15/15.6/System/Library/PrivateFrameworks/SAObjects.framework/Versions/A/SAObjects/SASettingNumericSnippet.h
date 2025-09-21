@interface SASettingNumericSnippet : SASettingSnippet

@property (nonatomic) char increment;

+ (id)numericSnippet;
+ (id)numericSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
