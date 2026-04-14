@class NSDictionary;

@interface REMNSPersistentHistoryChangeTombstone : REMChangeTombstone

@property (retain) NSDictionary *persistentHistoryChangeTombstone;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)externalIdentifier;
- (id)objectIdentifier;
- (id)daIsEventOnlyContainer;
- (id)shareeOwningListIdentifier;
- (id)shareeDisplayName;
- (id)shareeAddress;
- (id)assignmentOwningReminderIdentifier;
- (id)hashtagName;
- (id)hashtagReminderIdentifier;

@end
