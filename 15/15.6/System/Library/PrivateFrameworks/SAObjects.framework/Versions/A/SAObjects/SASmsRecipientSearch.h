@class NSArray;

@interface SASmsRecipientSearch : SADomainCommand

@property (nonatomic) char clientShouldResolvePhonesAndEmails;
@property (copy, nonatomic) NSArray *recipients;

+ (id)recipientSearch;
+ (id)recipientSearchWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
