@class NSString;

@interface PresenceSubscription : NSManagedObject

@property (class, readonly, nonatomic) NSString *presenceIdentifierKeyPath;
@property (class, readonly, nonatomic) NSString *channelIdentifierKeyPath;

@property (copy, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) NSString *presenceIdentifier;

+ (id)fetchRequest;
+ (id)predicateForPresenceIdentifier:(id)a0;
+ (id)predicateForChannelIdentifier:(id)a0;

@end
