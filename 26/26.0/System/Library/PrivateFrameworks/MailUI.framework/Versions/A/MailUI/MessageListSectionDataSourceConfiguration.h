@class NSString, MFSearchProgressView, MessageListViewControllerState, MUIMessageListCollectionView, EMCachingContactStore, EFPromise, MUIAvatarImageGenerator, MessageListCellLayoutValuesHelper, EMMessageList;
@protocol MessageListSectionDataSourceDelegate, MessageListSectionDataSourceSelectionModelProvider;

@interface MessageListSectionDataSourceConfiguration : NSObject

@property (readonly, nonatomic) NSString *section;
@property (readonly, nonatomic) MUIMessageListCollectionView *collectionView;
@property (readonly, nonatomic) EMMessageList *messageList;
@property (readonly, nonatomic) EFPromise *initialLoadCompletedPromise;
@property (readonly, nonatomic) MessageListCellLayoutValuesHelper *layoutValuesHelper;
@property (readonly, nonatomic) MessageListViewControllerState *state;
@property (readonly, weak, nonatomic) id<MessageListSectionDataSourceDelegate> delegate;
@property (readonly, weak, nonatomic) id<MessageListSectionDataSourceSelectionModelProvider> selectionModelProvider;
@property (retain, nonatomic) MFSearchProgressView *searchProgressView;
@property (readonly, nonatomic) unsigned long long headerType;
@property (retain, nonatomic) MUIAvatarImageGenerator *avatarGenerator;
@property (readonly, nonatomic) EMCachingContactStore *contactStore;

- (void).cxx_destruct;
- (id)initWithSection:(id)a0 collectionView:(id)a1 messageList:(id)a2 layoutValuesHelper:(id)a3 state:(id)a4 delegate:(id)a5 selectionModelProvider:(id)a6 initialLoadCompletedPromise:(id)a7 searchProgressView:(id)a8 headerType:(unsigned long long)a9 avatarGenerator:(id)a10 contactStore:(id)a11;

@end
