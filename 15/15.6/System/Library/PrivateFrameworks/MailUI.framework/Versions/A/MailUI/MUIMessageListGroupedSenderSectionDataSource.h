@protocol EFCancelable;

@interface MUIMessageListGroupedSenderSectionDataSource : MessageListSectionDataSource

@property (retain, nonatomic) id<EFCancelable> avatarUserDefaultObserver;
@property (nonatomic) char hideMessageListAvatar;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)sectionForCollection:(id)a0;
- (id)configuredCollectionViewCellForCollectionView:(id)a0 indexPath:(id)a1 itemID:(id)a2 cellIdentifier:(id)a3;

@end
