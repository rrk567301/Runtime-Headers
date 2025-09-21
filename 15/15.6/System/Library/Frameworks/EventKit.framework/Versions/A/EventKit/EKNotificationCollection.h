@class EKSource, NSSet;

@interface EKNotificationCollection : EKObject

@property (readonly, nonatomic) EKSource *source;
@property (copy, nonatomic) NSSet *notifications;

+ (id)knownRelationshipMultiValueKeys;
+ (Class)frozenClass;
+ (char)isWeakRelationship;

- (id)initWithOptions:(id)a0;
- (unsigned int)flags;
- (void)setFlags:(unsigned int)a0;
- (char)save:(id *)a0;
- (void)setSource:(id)a0;
- (char)validate:(id *)a0;
- (void)setExternalID:(id)a0;
- (void)_setNotificationsCollectionFlag;
- (char)_hasNotificationsCollectionFlag;
- (void)addNotification:(id)a0;
- (void)removeNotification:(id)a0;
- (void)setExternalIDTag:(id)a0;

@end
