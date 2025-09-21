@class NSString;

@interface SAMPBasicPodcastAppSearch : SADomainCommand

@property (nonatomic) char acceptPodcastCollections;
@property (nonatomic) char acceptPodcastStations;
@property (nonatomic) long long maxResults;
@property (copy, nonatomic) NSString *query;

+ (id)basicPodcastAppSearch;
+ (id)basicPodcastAppSearchWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
