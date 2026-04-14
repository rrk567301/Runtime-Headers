@class NSObject, FLFollowUpController;
@protocol OS_dispatch_queue;

@interface AMSFollowUp : NSObject

@property (retain, nonatomic) FLFollowUpController *followUpController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *followUpQueue;

- (void).cxx_destruct;
- (id)init;
- (BOOL)_itemIsExpired:(id)a0;
- (id)_clearGroupedFollowUpWithBackingIdentifier:(id)a0 config:(id)a1;
- (void)_clearGroupedHardwareFollowUps;
- (id)_clearNonGroupedFollowUpWithBackingIdentifier:(id)a0;
- (BOOL)_date:(id)a0 isLaterThanDate:(id)a1;
- (BOOL)_dateIsInThePast:(id)a0;
- (id)_dropExpiredItems:(id)a0;
- (id)_dsidFromBackingIdentifier:(id)a0;
- (id)_getHardwareFollowUpGroupingEnabledWithBag:(id)a0;
- (id)_getHardwareFollowUpSheetURLWithBag:(id)a0;
- (id)_getHardwareOffersFeatureConfigFromBag;
- (id)_getHardwareOffersSheetURL;
- (id)_groupedHardwareFollowUpItemBackingIdentifierForDSID:(id)a0;
- (id)_isGroupedHardwareOfferWithBackingIdentifier:(id)a0;
- (id)_loadGroupedHardwareOfferFollowUpItemsForDSID:(id)a0;
- (id)_makeGroupedHardwareFollowUpItemFromItems:(id)a0 DSID:(id)a1 config:(id)a2;
- (id)_pendingFollowUpWithBackingIdentifier:(id)a0 error:(id *)a1;
- (id)_postGroupedFollowUpItem:(id)a0 config:(id)a1;
- (id)_postNonGroupedFollowUpItem:(id)a0;
- (BOOL)_updateGroupedHardwareFollowUpItemWithItems:(id)a0 DSID:(id)a1 config:(id)a2 error:(id *)a3;
- (id)clearFollowUpItem:(id)a0;
- (id)clearFollowUpWithBackingIdentifier:(id)a0;
- (id)clearFollowUpWithIdentifier:(id)a0 account:(id)a1;
- (id)migrateHardwareFollowUpsIfNeeded;
- (id)pendingFollowUpWithIdentifier:(id)a0 account:(id)a1;
- (id)pendingFollowUps;
- (id)pendingFollowUpsForAccount:(id)a0;
- (id)postFollowUpItem:(id)a0;

@end
