@class NSDictionary, NSUUID;

@interface REMNSPersistentHistoryChangeTombstone : REMChangeTombstone

@property (retain) NSDictionary *persistentHistoryChangeTombstone;
@property (readonly) NSUUID *uuidForChangeTracking;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (id)objectIdentifier;
- (id)daIsEventOnlyContainer;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)externalIdentifier;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)shareeDisplayName;
- (id)assignmentOwningReminderIdentifier;
- (id)dueDateDeltaAlertReminderIdentifier;
- (id)hashtagLabelUUIDForChangeTracking;
- (id)hashtagName;
- (id)hashtagReminderIdentifier;
- (id)remObjectIdentifier;
- (id)shareeAddress;
- (id)shareeOwningListIdentifier;
- (id)syncActivityUUIDForChangeTracking;

@end
