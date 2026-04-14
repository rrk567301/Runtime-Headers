@class NSString, PresenceChannel;

@interface PresenceSubscription : NSManagedObject

@property (class, readonly, nonatomic) NSString *presenceIdentifierKeyPath;
@property (class, readonly, nonatomic) NSString *channelIdentifierKeyPath;

@property (copy, nonatomic) NSString *channelIdentifier;
@property (nonatomic) int filterOverride;
@property (copy, nonatomic) NSString *presenceIdentifier;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (retain, nonatomic) PresenceChannel *channel;

+ (id)fetchRequest;
+ (id)predicateForPresenceIdentifier:(id)a0;
+ (id)predicateForChannelIdentifier:(id)a0;

@end
