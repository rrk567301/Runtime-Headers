@interface NDOFollowUp : NSObject

- (void)clearFollowUp;
- (void)clearNotification;
- (void)_setupFollowUpItem:(id)a0 withWarranty:(id)a1 serialNumber:(id)a2;
- (id)_setupFollowUpNotificationWithWarranty:(id)a0;
- (void)badgeFollowup;
- (BOOL)followupExists;
- (void)postFollowUpWithWarranty:(id)a0 serialNumber:(id)a1;
- (void)postFollowUpWithWarranty:(id)a0 serialNumber:(id)a1 uniqueIdentifier:(id)a2;
- (BOOL)refreshFollowupWithWarranty:(id)a0 serialNumber:(id)a1;

@end
