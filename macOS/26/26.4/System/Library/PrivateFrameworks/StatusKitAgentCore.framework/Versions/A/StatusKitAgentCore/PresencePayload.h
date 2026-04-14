@class NSData, PresenceAssertion;

@interface PresencePayload : NSManagedObject

@property (retain, nonatomic) NSData *payloadData;
@property (nonatomic) long long priority;
@property (nonatomic) double ttlSeconds;
@property (retain, nonatomic) PresenceAssertion *persistent;
@property (retain, nonatomic) PresenceAssertion *presence;

+ (id)fetchRequest;

@end
