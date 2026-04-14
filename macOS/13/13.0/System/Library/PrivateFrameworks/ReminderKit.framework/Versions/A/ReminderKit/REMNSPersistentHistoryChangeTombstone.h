@class NSDictionary, NSUUID;

@interface REMNSPersistentHistoryChangeTombstone : REMChangeTombstone

@property (retain) NSDictionary *persistentHistoryChangeTombstone;
@property (readonly) NSUUID *uuidForChangeTracking;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)externalIdentifier;
- (id)objectIdentifier;
- (id)shareeDisplayName;
- (id)daIsEventOnlyContainer;
- (id)remObjectIdentifier;
- (id)shareeOwningListIdentifier;
- (id)shareeAddress;
- (id)assignmentOwningReminderIdentifier;
- (id)hashtagName;
- (id)hashtagReminderIdentifier;
- (id)hashtagLabelUUIDForChangeTracking;
- (id)syncActivityUUIDForChangeTracking;

@end
