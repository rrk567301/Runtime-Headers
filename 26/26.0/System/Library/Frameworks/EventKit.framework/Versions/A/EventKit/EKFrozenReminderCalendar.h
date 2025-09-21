@class REMListChangeItem;

@interface EKFrozenReminderCalendar : EKFrozenReminderObject {
    REMListChangeItem *_listChange;
}

+ (Class)meltedClass;

- (id)sharees;
- (id)remObjectID;
- (int)allowedEntities;
- (id)UUID;
- (unsigned long long)sharingStatus;
- (id)colorStringRaw;
- (id)publishURLString;
- (BOOL)isPublished;
- (id)syncError;
- (id)image;
- (BOOL)isColorDisplayOnly;
- (id)title;
- (id)unlocalizedTitle;
- (int)flags;
- (id)externalID;
- (id)sharedOwnerName;
- (int)displayOrder;
- (id)uniqueIdentifier;
- (id)symbolicColorName;
- (id)allAlarms;
- (void).cxx_destruct;
- (id)source;
- (id)calendarIdentifier;
- (id)_account;
- (id)REMColorFromEKHexColorString:(id)a0;
- (BOOL)_applyChanges:(id)a0 error:(id *)a1;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)_list;
- (unsigned long long)ekSharingStatusFromREMSharingStatus:(long long)a0;
- (id)frozenReminderSource;
- (id)hexColorStringFromREMColor:(id)a0;
- (id)initNewListInStore:(id)a0;
- (id)updateListWithSaveRequest:(id)a0 error:(id *)a1;

@end
