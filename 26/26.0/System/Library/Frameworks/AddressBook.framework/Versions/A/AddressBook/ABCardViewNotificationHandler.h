@class CNContactCardViewController;

@interface ABCardViewNotificationHandler : NSObject {
    CNContactCardViewController *_cardViewController;
}

- (BOOL)isSaving;
- (void).cxx_destruct;
- (void)handleExternalNotification:(id)a0;
- (void)handleLocalNotification:(id)a0;
- (id)identifiersForRecords:(id)a0;
- (id)initWithCardViewController:(id)a0;
- (BOOL)isCardViewProcessingChanges;
- (BOOL)shouldRefreshCardViewWithIdentifiers:(id)a0 forNotification:(id)a1;
- (id)updatedRecordsInLocalNotification:(id)a0;

@end
