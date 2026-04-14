@interface ConversationKit.ParticipantListViewController : PlatformViewController <NSCollectionViewDelegate> {
    void /* unknown type, empty encoding */ collectionViewDataSource;
    void /* unknown type, empty encoding */ participantListLayout;
    void /* unknown type, empty encoding */ viewContent;
    void /* unknown type, empty encoding */ lastLayedOutViewSize;
    void /* unknown type, empty encoding */ participantsViewControllerDelegate;
    void /* unknown type, empty encoding */ participantListViewControllerDelegate;
    void /* unknown type, empty encoding */ recentlyVisibleParticipantIdentifiers;
}

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLayout;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)accessibilityParticipantCollectionView;
- (void)handleScrollViewBoundsDidChangedNotificationWithNotification:(id)a0;

@end
