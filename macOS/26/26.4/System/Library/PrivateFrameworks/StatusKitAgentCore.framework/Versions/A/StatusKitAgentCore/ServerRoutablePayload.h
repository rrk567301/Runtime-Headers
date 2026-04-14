@class NSData, NSUUID, PresenceAssertion;

@interface ServerRoutablePayload : NSManagedObject

@property (retain, nonatomic) NSData *payloadData;
@property (retain, nonatomic) NSData *payloadKeyData;
@property (copy, nonatomic) NSUUID *routingUUID;
@property (retain, nonatomic) PresenceAssertion *presenceAssertion;

+ (id)fetchRequest;

@end
