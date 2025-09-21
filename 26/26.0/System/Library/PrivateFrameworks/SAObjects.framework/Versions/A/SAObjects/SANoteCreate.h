@class NSString;

@interface SANoteCreate : SADomainCommand

@property (copy, nonatomic) NSString *contents;

+ (id)create;
+ (id)createWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
