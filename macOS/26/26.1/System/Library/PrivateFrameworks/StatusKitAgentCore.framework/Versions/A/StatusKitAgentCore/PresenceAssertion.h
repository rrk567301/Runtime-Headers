@class NSString, NSData, PresenceOptions;

@interface PresenceAssertion : NSManagedObject

@property (class, readonly, nonatomic) NSString *presenceIdentifierKeyPath;

@property (retain, nonatomic) NSData *payload;
@property (copy, nonatomic) NSString *presenceIdentifier;
@property (nonatomic) short pushPriority;
@property (retain, nonatomic) PresenceOptions *options;

+ (id)fetchRequest;
+ (id)isPersonalKeyPath;
+ (id)predicateForPresenceIdentifier:(id)a0 isPersonal:(BOOL)a1;

@end
