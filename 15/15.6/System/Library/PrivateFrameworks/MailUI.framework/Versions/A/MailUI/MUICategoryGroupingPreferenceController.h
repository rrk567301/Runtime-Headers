@protocol EFCancelable, MUICategoryGroupingPreferenceControllerDelegate;

@interface MUICategoryGroupingPreferenceController : NSObject

@property (nonatomic) char shouldDisableGroupingInTransactions;
@property (nonatomic) char shouldDisableGroupingInUpdates;
@property (nonatomic) char shouldDisableGroupingInPromotions;
@property (retain, nonatomic) id<EFCancelable> shouldDisableGroupingInTransactionsUserDefaultsObserver;
@property (retain, nonatomic) id<EFCancelable> shouldDisableGroupingInUpdatesUserDefaultsObserver;
@property (retain, nonatomic) id<EFCancelable> shouldDisableGroupingInPromotionsUserDefaultsObserver;
@property (weak, nonatomic) id<MUICategoryGroupingPreferenceControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (char)shouldDisableGroupingForBucket:(long long)a0;
- (void)disableGrouping:(char)a0 forBucket:(long long)a1;

@end
