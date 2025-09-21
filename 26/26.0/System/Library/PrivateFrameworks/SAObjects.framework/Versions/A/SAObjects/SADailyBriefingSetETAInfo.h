@class NSString;

@interface SADailyBriefingSetETAInfo : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *destination;
@property (nonatomic) double eta;
@property (copy, nonatomic) NSString *transportType;
@property (copy, nonatomic) NSString *viaRoute;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
