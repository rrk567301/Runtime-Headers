@class REMListChangeItem;

@interface EKFrozenReminderCalendar : EKFrozenReminderObject {
    REMListChangeItem *_listChange;
}

+ (Class)meltedClass;

- (void).cxx_destruct;
- (id)calendarIdentifier;
- (id)UUID;
- (id)uniqueIdentifier;
- (id)unlocalizedTitle;
- (int)flags;
- (id)image;
- (id)source;
- (id)title;
- (unsigned long long)sharingStatus;
- (id)allAlarms;
- (id)externalID;
- (id)_account;
- (char)isPublished;
- (int)displayOrder;
- (id)sharees;
- (id)symbolicColorName;
- (id)REMColorFromEKHexColorString:(id)a0;
- (id)sharedOwnerName;
- (int)allowedEntities;
- (char)_applyChanges:(id)a0 error:(id *)a1;
- (char)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)_list;
- (id)colorStringRaw;
- (unsigned long long)ekSharingStatusFromREMSharingStatus:(long long)a0;
- (id)frozenReminderSource;
- (id)hexColorStringFromREMColor:(id)a0;
- (id)initNewListInStore:(id)a0;
- (char)isColorDisplayOnly;
- (id)publishURLString;
- (id)remObjectID;
- (id)syncError;
- (id)updateListWithSaveRequest:(id)a0 error:(id *)a1;

@end
