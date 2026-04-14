@class CNContactCardViewController;

@interface ABCardViewNotificationHandler : NSObject {
    CNContactCardViewController *_cardViewController;
}

- (void).cxx_destruct;
- (BOOL)isSaving;
- (id)initWithCardViewController:(id)a0;
- (void)handleLocalNotification:(id)a0;
- (void)handleExternalNotification:(id)a0;
- (BOOL)shouldRefreshCardViewWithIdentifiers:(id)a0 forNotification:(id)a1;
- (BOOL)isCardViewProcessingChanges;
- (id)updatedRecordsInLocalNotification:(id)a0;
- (id)identifiersForRecords:(id)a0;

@end
