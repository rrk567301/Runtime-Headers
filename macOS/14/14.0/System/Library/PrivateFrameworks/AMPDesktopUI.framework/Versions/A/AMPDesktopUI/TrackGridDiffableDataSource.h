@class AMPTrackGridLockup;

@interface TrackGridDiffableDataSource : NSCollectionViewDiffableDataSource

@property (weak, nonatomic) AMPTrackGridLockup *owner;

- (void).cxx_destruct;
- (id)collectionView:(id)a0 pasteboardWriterForItemAtIndexPath:(id)a1;

@end
