@class NSCollectionView, IMAggregateAcknowledgmentChatItem, NSScrollView, NSArray, NSString, NSDictionary, NSLayoutConstraint, IMGroupAcknowledgementPollSectionView, NSNumber;

@interface IMGroupAcknowledgementPollViewController : NSViewController <NSCollectionViewDataSource, NSCollectionViewDelegate>

@property (weak) NSScrollView *scrollView;
@property (weak) NSCollectionView *collectionView;
@property (retain) NSDictionary *talliedResults;
@property (retain) NSDictionary *talliedLastDates;
@property (retain) NSArray *sortedAcknowledgementTypes;
@property (retain) NSNumber *expandedSection;
@property (weak) NSLayoutConstraint *expandedLeaderLeadingConstraint;
@property (weak) IMGroupAcknowledgementPollSectionView *expandedLeaderSectionHeader;
@property (weak) NSLayoutConstraint *expandedTrailerTrailingConstraint;
@property (readonly) IMAggregateAcknowledgmentChatItem *groupAcknowledgements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidAppear;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (void)viewWillAppear;
- (long long)_associatedMessageTypeForSection:(unsigned long long)a0;
- (id)_imHandleForIndexPath:(id)a0;
- (void)contractSection:(id)a0;
- (void)updateWithGroupAcknowledgements:(id)a0;

@end
