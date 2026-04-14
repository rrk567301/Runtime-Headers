@class PresenceSubscription, NSString, NSData, NSDate, PresenceAssertion;

@interface PresenceChannel : NSManagedObject

@property (copy, nonatomic) NSString *channelIdentifier;
@property (retain, nonatomic) NSData *channelToken;
@property (copy, nonatomic) NSDate *dateCreated;
@property (retain, nonatomic) NSData *membershipKey;
@property (retain, nonatomic) NSData *peerKey;
@property (retain, nonatomic) NSData *serverKey;
@property (nonatomic) long long version;
@property (retain, nonatomic) PresenceAssertion *assertion;
@property (retain, nonatomic) PresenceSubscription *subscription;

+ (id)fetchRequest;

@end
