@class NSString;

@interface SASyncGetCachedSyncAnchors : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *interactionId;

+ (id)getCachedSyncAnchors;
+ (id)getCachedSyncAnchorsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
