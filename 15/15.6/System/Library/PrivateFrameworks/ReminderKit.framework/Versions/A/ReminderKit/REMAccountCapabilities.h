@interface REMAccountCapabilities : NSObject

@property (readonly, nonatomic) char supportsEventKitSync;
@property (readonly, nonatomic) char supportsCloudKitSync;
@property (readonly, nonatomic) char supportsCalDAVNotifications;
@property (readonly, nonatomic) char supportsListSharees;
@property (readonly, nonatomic) char supportsListShareesMutation;
@property (readonly, nonatomic) char supportsMoveAcrossLists;
@property (readonly, nonatomic) char supportsMoveAcrossSharedLists;
@property (readonly, nonatomic) char supportsMultipleDateAlarmsOnRecurrence;
@property (readonly, nonatomic) char supportsSections;
@property (readonly, nonatomic) char supportsDueDateDeltaAlerts;
@property (readonly, nonatomic) long long defaultReminderPriorityLevel;
@property (readonly, nonatomic) char supportsHandoff;
@property (readonly, nonatomic) char supportsReminderActions;
@property (readonly, nonatomic) char supportsCRDTs;
@property (readonly, nonatomic) char supportsAssignments;
@property (readonly, nonatomic) char supportsHashtags;
@property (readonly, nonatomic) char insertsCompletedRecurrentCloneAtTail;
@property (readonly, nonatomic) char supportsCustomSmartLists;
@property (readonly, nonatomic) char supportsPinnedLists;
@property (readonly, nonatomic) char supportsTextStyling;
@property (readonly, nonatomic) char supportsDeletionByTTL;
@property (readonly, nonatomic) char supportsGroceriesList;
@property (readonly, nonatomic) char supportsRecentlyDeletedList;
@property (readonly, nonatomic) char supportsSubtasks;
@property (readonly, nonatomic) char supportsAttachments;
@property (readonly, nonatomic) char supportsListAppearance;
@property (readonly, nonatomic) char supportsGroups;
@property (readonly, nonatomic) char supportsFlagged;
@property (readonly, nonatomic) char supportsPersonTrigger;
@property (readonly, nonatomic) char supportsLocation;
@property (readonly, nonatomic) char supportsHourlyRecurrence;
@property (readonly, nonatomic) char supportsTemplates;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithAccountType:(long long)a0;

@end
