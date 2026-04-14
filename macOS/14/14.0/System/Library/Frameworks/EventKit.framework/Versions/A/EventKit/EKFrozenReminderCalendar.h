@class REMListChangeItem;

@interface EKFrozenReminderCalendar : EKFrozenReminderObject {
    REMListChangeItem *_listChange;
}

+ (Class)meltedClass;

- (int)flags;
- (void).cxx_destruct;
- (id)_list;
- (id)calendarIdentifier;
- (id)source;
- (id)UUID;
- (id)uniqueIdentifier;
- (id)unlocalizedTitle;
- (id)image;
- (id)title;
- (id)_account;
- (unsigned long long)sharingStatus;
- (id)allAlarms;
- (id)externalID;
- (BOOL)isPublished;
- (int)displayOrder;
- (id)sharees;
- (id)symbolicColorName;
- (id)REMColorFromEKHexColorString:(id)a0;
- (id)sharedOwnerName;
- (int)allowedEntities;
- (BOOL)_applyChanges:(id)a0 error:(id *)a1;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)colorStringRaw;
- (unsigned long long)ekSharingStatusFromREMSharingStatus:(long long)a0;
- (id)frozenReminderSource;
- (id)hexColorStringFromREMColor:(id)a0;
- (id)initNewListInStore:(id)a0;
- (BOOL)isColorDisplayOnly;
- (id)publishURLString;
- (id)remObjectID;
- (id)syncError;
- (id)updateListWithSaveRequest:(id)a0 error:(id *)a1;

@end
