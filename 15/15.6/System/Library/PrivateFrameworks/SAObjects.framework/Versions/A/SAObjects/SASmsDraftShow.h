@class NSURL;

@interface SASmsDraftShow : SADomainCommand

@property (copy, nonatomic) NSURL *smsIdentifier;

+ (id)draftShow;
+ (id)draftShowWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
