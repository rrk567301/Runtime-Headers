@interface SADailyBriefingGetETAInfo : SABaseClientBoundCommand

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
