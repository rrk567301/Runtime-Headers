@class NSMutableDictionary, BRDarwinNotifySender, NSMutableSet, NSDate, NSNumber;

@interface BRCUploadConstraintChecker : NSObject {
    long long _availableSizeForUpload;
    NSNumber *_maxBytesForSingleItemUploadOnCellular;
    NSDate *_lastMidnightDate;
    NSMutableDictionary *_personaIDToRescheduleSuspendedJobsBlock;
    NSMutableDictionary *_personaIDToNoSpaceExecutionBlock;
    NSNumber *_isInSyncBubble;
    NSDate *_lastOverrideDate;
    double _overrideUploadsOnCellularForTimeLimit;
    BRDarwinNotifySender *_cellularConstraintsNotifier;
    NSMutableSet *_rejectedItemsDueToSize;
}

+ (id)defaultChecker;

- (id)_init;
- (void).cxx_destruct;
- (void)_addItemIDToRejectedItemsWithItemID:(id)a0;
- (BOOL)_areConstraintsOverriden;
- (BOOL)_hasRejectedItemsDueToSize;
- (BOOL)_removeItemIDFromRejectedItemsWithItemID:(id)a0 shouldSendNotification:(BOOL *)a1;
- (void)_rescheduleAndResetAvailableSizeAndDateIfNeededWithDidReset:(BOOL *)a0;
- (BOOL)_resetAvailableSizeAndDateIfNeeded;
- (void)_scheduleNoSpaceExecutionBlocksWithAvailableSpace:(long long)a0;
- (void)addNoSpaceExecutionBlock:(id /* block */)a0 forPersonaID:(id)a1;
- (void)addRescheduleSuspendedJobsBlock:(id /* block */)a0 forPersonaID:(id)a1;
- (id)availableSizeForUpload;
- (BOOL)canUploadItemWithSize:(unsigned long long)a0 itemScope:(unsigned char)a1 itemID:(id)a2 withError:(id *)a3;
- (void)overrideConstraints;
- (void)removeItemWithItemID:(id)a0;
- (void)rescheduleAndResetAvailableSizeAndDateIfNeeded;
- (void)rescheduleUploadsAndSendNotificationIfNeeded;
- (void)sendCellularConstraintNotification;
- (void)updateWithUploadedBytesSize:(unsigned long long)a0 forItemID:(id)a1;

@end
