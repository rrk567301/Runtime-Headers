@interface ConversationKit.ParticipantListViewController : PlatformViewController <NSCollectionViewDelegate> {
    void /* unknown type, empty encoding */ collectionViewDataSource;
    void /* unknown type, empty encoding */ participantListLayout;
    void /* unknown type, empty encoding */ viewContent;
    void /* unknown type, empty encoding */ lastLayedOutViewSize;
    void /* unknown type, empty encoding */ participantsViewControllerDelegate;
    void /* unknown type, empty encoding */ participantListViewControllerDelegate;
    void /* unknown type, empty encoding */ recentlyVisibleParticipantIdentifiers;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidLayout;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)accessibilityParticipantCollectionView;
- (void)handleScrollViewBoundsDidChangedNotificationWithNotification:(id)a0;

@end
