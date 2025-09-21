@protocol EFCancelable, MUICategoryGroupingPreferenceControllerDelegate;

@interface MUICategoryGroupingPreferenceController : NSObject

@property (nonatomic) BOOL shouldDisableGroupingInTransactions;
@property (nonatomic) BOOL shouldDisableGroupingInUpdates;
@property (nonatomic) BOOL shouldDisableGroupingInPromotions;
@property (retain, nonatomic) id<EFCancelable> shouldDisableGroupingInTransactionsUserDefaultsObserver;
@property (retain, nonatomic) id<EFCancelable> shouldDisableGroupingInUpdatesUserDefaultsObserver;
@property (retain, nonatomic) id<EFCancelable> shouldDisableGroupingInPromotionsUserDefaultsObserver;
@property (weak, nonatomic) id<MUICategoryGroupingPreferenceControllerDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldDisableGroupingForBucket:(long long)a0;
- (void)disableGrouping:(BOOL)a0 forBucket:(long long)a1;

@end
