@class NSString, PresenceAssertion;

@interface PresenceOptions : NSManagedObject

@property (copy, nonatomic) NSString *clientSpecifiedURI;
@property (nonatomic) BOOL isPersonal;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (retain, nonatomic) PresenceAssertion *assertion;

+ (id)fetchRequest;

@end
