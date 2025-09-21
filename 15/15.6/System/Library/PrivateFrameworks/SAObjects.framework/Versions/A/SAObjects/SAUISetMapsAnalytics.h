@class NSString, NSDate;

@interface SAUISetMapsAnalytics : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *extSessionGuid;
@property (copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
