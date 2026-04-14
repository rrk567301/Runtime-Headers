@interface ConversationKit.ParticipantsCollectionViewDataSource : NSObject <NSCollectionViewDataSource> {
    void /* unknown type, empty encoding */ onlineParticipants;
    void /* unknown type, empty encoding */ offlineParticipants;
    void /* unknown type, empty encoding */ participantIsShownInGrid;
    void /* unknown type, empty encoding */ didCreateCellForParticipant;
}

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;

@end
