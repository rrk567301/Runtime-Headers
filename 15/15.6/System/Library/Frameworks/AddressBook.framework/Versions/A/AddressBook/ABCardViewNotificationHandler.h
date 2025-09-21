@class CNContactCardViewController;

@interface ABCardViewNotificationHandler : NSObject {
    CNContactCardViewController *_cardViewController;
}

- (void).cxx_destruct;
- (char)isSaving;
- (void)handleExternalNotification:(id)a0;
- (void)handleLocalNotification:(id)a0;
- (id)identifiersForRecords:(id)a0;
- (id)initWithCardViewController:(id)a0;
- (char)isCardViewProcessingChanges;
- (char)shouldRefreshCardViewWithIdentifiers:(id)a0 forNotification:(id)a1;
- (id)updatedRecordsInLocalNotification:(id)a0;

@end
