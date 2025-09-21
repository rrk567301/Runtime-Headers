@class NSString, SALocation;

@interface SARecordLocationActivity : SABaseClientBoundCommand

@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSString *sourceType;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
