@class NSString;

@interface SAMPMusicPlaybackImminent : SADomainCommand

@property (copy, nonatomic) NSString *preloadedUserSharedUserId;

+ (id)musicPlaybackImminent;
+ (id)musicPlaybackImminentWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
