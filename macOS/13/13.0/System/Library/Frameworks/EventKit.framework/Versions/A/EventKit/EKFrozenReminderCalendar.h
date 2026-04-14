@class REMListChangeItem;

@interface EKFrozenReminderCalendar : EKFrozenReminderObject {
    REMListChangeItem *_listChange;
}

+ (Class)meltedClass;

- (int)flags;
- (id)_list;
- (void).cxx_destruct;
- (id)calendarIdentifier;
- (id)source;
- (id)UUID;
- (id)uniqueIdentifier;
- (id)unlocalizedTitle;
- (id)title;
- (id)_account;
- (unsigned long long)sharingStatus;
- (id)allAlarms;
- (id)externalID;
- (BOOL)isPublished;
- (int)displayOrder;
- (id)symbolicColorName;
- (id)sharees;
- (id)initNewListInStore:(id)a0;
- (id)remObjectID;
- (id)colorStringRaw;
- (unsigned long long)ekSharingStatusFromREMSharingStatus:(long long)a0;
- (id)publishURLString;
- (id)REMColorFromEKHexColorString:(id)a0;
- (id)hexColorStringFromREMColor:(id)a0;
- (BOOL)_applyChanges:(id)a0 error:(id *)a1;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)frozenReminderSource;
- (id)updateListWithSaveRequest:(id)a0 error:(id *)a1;
- (int)allowedEntities;
- (BOOL)isColorDisplayOnly;
- (id)sharedOwnerName;
- (id)syncError;

@end
