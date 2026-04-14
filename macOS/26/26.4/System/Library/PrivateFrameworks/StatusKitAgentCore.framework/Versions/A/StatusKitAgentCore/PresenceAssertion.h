@class PresencePayload, NSString, ServerRoutablePayload, PresenceOptions, PresenceChannel;

@interface PresenceAssertion : NSManagedObject

@property (class, readonly, nonatomic) NSString *presenceIdentifierKeyPath;
@property (class, readonly, nonatomic) NSString *isPersonalKeyPath;
@property (class, readonly, nonatomic) NSString *isPresentKeyPath;

@property (nonatomic) BOOL isPresent;
@property (copy, nonatomic) NSString *presenceIdentifier;
@property (nonatomic) short pushPriority;
@property (retain, nonatomic) PresenceChannel *channel;
@property (retain, nonatomic) PresenceOptions *options;
@property (retain, nonatomic) PresencePayload *persistentPayload;
@property (retain, nonatomic) PresencePayload *presencePayload;
@property (retain, nonatomic) ServerRoutablePayload *serverRoutablePayload;

+ (id)fetchRequest;
+ (id)predicateForIsPresent:(BOOL)a0;
+ (id)predicateForPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1;

@end
