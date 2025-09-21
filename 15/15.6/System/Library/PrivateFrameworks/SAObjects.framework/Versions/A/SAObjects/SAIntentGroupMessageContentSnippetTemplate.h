@class NSString;

@interface SAIntentGroupMessageContentSnippetTemplate : SAIntentGroupSnippetTemplate

@property (copy, nonatomic) NSString *content;
@property (nonatomic) char sentStatus;

+ (id)messageContentSnippetTemplate;
+ (id)messageContentSnippetTemplateWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
