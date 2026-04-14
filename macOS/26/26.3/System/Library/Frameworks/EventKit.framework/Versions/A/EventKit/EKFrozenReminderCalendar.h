@class REMListChangeItem;

@interface EKFrozenReminderCalendar : EKFrozenReminderObject {
    REMListChangeItem *_listChange;
}

+ (Class)meltedClass;

- (id)remObjectID;
- (id)allAlarms;
- (id)uniqueIdentifier;
- (id)publishURLString;
- (id)UUID;
- (int)allowedEntities;
- (id)source;
- (id)externalID;
- (id)symbolicColorName;
- (int)flags;
- (id)sharees;
- (unsigned long long)sharingStatus;
- (id)title;
- (id)syncError;
- (BOOL)isPublished;
- (void).cxx_destruct;
- (id)sharedOwnerName;
- (int)displayOrder;
- (id)colorStringRaw;
- (id)image;
- (id)unlocalizedTitle;
- (BOOL)isColorDisplayOnly;
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
