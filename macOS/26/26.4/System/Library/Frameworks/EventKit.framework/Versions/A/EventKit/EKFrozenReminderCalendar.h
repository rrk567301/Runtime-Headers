@class REMListChangeItem;

@interface EKFrozenReminderCalendar : EKFrozenReminderObject {
    REMListChangeItem *_listChange;
}

+ (Class)meltedClass;

- (id)image;
- (int)flags;
- (id)symbolicColorName;
- (id)remObjectID;
- (id)uniqueIdentifier;
- (BOOL)isPublished;
- (id)externalID;
- (id)sharees;
- (int)allowedEntities;
- (unsigned long long)sharingStatus;
- (id)allAlarms;
- (id)title;
- (id)source;
- (id)sharedOwnerName;
- (id)syncError;
- (void).cxx_destruct;
- (BOOL)isColorDisplayOnly;
- (id)publishURLString;
- (int)displayOrder;
- (id)colorStringRaw;
- (id)unlocalizedTitle;
- (id)UUID;
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
