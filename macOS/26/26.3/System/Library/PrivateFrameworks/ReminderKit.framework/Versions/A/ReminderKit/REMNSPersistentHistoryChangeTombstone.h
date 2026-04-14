@class NSDictionary, NSUUID;

@interface REMNSPersistentHistoryChangeTombstone : REMChangeTombstone

@property (retain) NSDictionary *persistentHistoryChangeTombstone;
@property (readonly) NSUUID *uuidForChangeTracking;

+ (BOOL)supportsSecureCoding;

- (id)externalIdentifier;
- (id)daIsEventOnlyContainer;
- (id)objectIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
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
