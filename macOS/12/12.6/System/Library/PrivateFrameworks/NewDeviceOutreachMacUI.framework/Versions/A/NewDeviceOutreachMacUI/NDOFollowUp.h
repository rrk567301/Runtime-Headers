@interface NDOFollowUp : NSObject

- (void)postFollowUpWithWarranty:(id)a0 serialNumber:(id)a1 uniqueIdentifier:(id)a2;
- (void)_setupFollowUpItem:(id)a0 withWarranty:(id)a1 serialNumber:(id)a2;
- (void)clearFollowUp;
- (void)postFollowUpWithWarranty:(id)a0 serialNumber:(id)a1;
- (id)_setupFollowUpNotificationWithWarranty:(id)a0;
- (BOOL)refreshFollowupWithWarranty:(id)a0 serialNumber:(id)a1;
- (BOOL)followupExists;
- (void)badgeFollowup;

@end
