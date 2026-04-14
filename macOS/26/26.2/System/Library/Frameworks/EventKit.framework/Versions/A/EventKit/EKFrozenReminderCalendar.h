@class REMListChangeItem;

@interface EKFrozenReminderCalendar : EKFrozenReminderObject {
    REMListChangeItem *_listChange;
}

+ (Class)meltedClass;

- (id)uniqueIdentifier;
- (id)symbolicColorName;
- (id)sharees;
- (id)remObjectID;
- (id)title;
- (int)flags;
- (id)allAlarms;
- (id)sharedOwnerName;
- (int)displayOrder;
- (id)source;
- (BOOL)isPublished;
- (BOOL)isColorDisplayOnly;
- (id)unlocalizedTitle;
- (unsigned long long)sharingStatus;
- (int)allowedEntities;
- (void).cxx_destruct;
- (id)image;
- (id)colorStringRaw;
- (id)UUID;
- (id)syncError;
- (id)publishURLString;
- (id)externalID;
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
