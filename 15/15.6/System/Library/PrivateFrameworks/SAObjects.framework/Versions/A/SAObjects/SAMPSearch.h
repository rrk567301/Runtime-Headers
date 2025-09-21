@class NSArray;

@interface SAMPSearch : SADomainCommand

@property (copy, nonatomic) NSArray *constraints;
@property (nonatomic) long long maxResults;
@property (copy, nonatomic) NSArray *searchTypes;
@property (nonatomic) char strict;

+ (id)search;
+ (id)searchWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
