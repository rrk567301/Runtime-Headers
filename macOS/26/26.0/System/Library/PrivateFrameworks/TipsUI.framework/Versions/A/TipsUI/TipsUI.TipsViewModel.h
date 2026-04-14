@class NSString, _TtC6TipsUI16TipsContentModel, TPSCollection;

@interface TipsUI.TipsViewModel : TipNavigationViewModel {
    void /* unknown type, empty encoding */ _currentTipIdentifier;
    void /* unknown type, empty encoding */ tipIdentifiableIndexMap;
}

@property (nonatomic, copy) NSString *currentTipIdentifier;
@property (nonatomic, readonly) _TtC6TipsUI16TipsContentModel *contentModel;
@property (nonatomic, retain) TPSCollection *collection;
@property (nonatomic, readonly) NSString *collectionTitle;
@property (nonatomic, readonly) BOOL hasIntroTip;
@property (nonatomic, readonly) BOOL hasOutroTip;
@property (nonatomic, readonly) BOOL shouldDisplayPagingLabel;
@property (nonatomic, readonly) long long currentTipIndex;
@property (nonatomic, readonly) long long currentTipPagingIndex;
@property (nonatomic, readonly) long long totalPagingCount;

- (id)init;
- (void).cxx_destruct;
- (id)tipForIdentifier:(id)a0;
- (id)initWithContentModel:(id)a0;
- (void)selectTipAtIndex:(long long)a0;
- (id)tipBodyOrContentWithTip:(id)a0;

@end
