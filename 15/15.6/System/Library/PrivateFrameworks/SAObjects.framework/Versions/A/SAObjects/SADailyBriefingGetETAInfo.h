@interface SADailyBriefingGetETAInfo : SABaseClientBoundCommand

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
