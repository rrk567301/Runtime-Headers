@class REMListChangeItem;

@interface EKFrozenReminderCalendar : EKFrozenReminderObject {
    REMListChangeItem *_listChange;
}

+ (Class)meltedClass;

- (id)sharees;
- (id)symbolicColorName;
- (id)remObjectID;
- (int)flags;
- (id)syncError;
- (id)unlocalizedTitle;
- (int)allowedEntities;
- (int)displayOrder;
- (BOOL)isPublished;
- (id)image;
- (id)source;
- (id)uniqueIdentifier;
- (BOOL)isColorDisplayOnly;
- (unsigned long long)sharingStatus;
- (id)sharedOwnerName;
- (id)title;
- (void).cxx_destruct;
- (id)externalID;
- (id)colorStringRaw;
- (id)publishURLString;
- (id)UUID;
- (id)allAlarms;
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
