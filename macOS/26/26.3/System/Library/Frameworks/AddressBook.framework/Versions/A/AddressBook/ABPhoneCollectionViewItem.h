@class ABRTTServices, ABCollectionItemMessagingAvailabilityHelper, CNFuture;

@interface ABPhoneCollectionViewItem : ABCollectionViewItem <ABCollectionItemMessagingAvailabilityHelperDelegate>

@property (retain, nonatomic) ABCollectionItemMessagingAvailabilityHelper *messagingHelper;
@property (retain, nonatomic) ABRTTServices *ttyServices;
@property (retain, nonatomic) CNFuture *availabilityFuture;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didInsertIntoCollectionView:(id)a0;
- (void)didRemoveFromCollection:(id)a0;
- (void)messagingAvailabilityDidChangeHelper:(id)a0;
- (BOOL)shouldShowGlyphButton:(id)a0;
- (BOOL)shouldShowStaticIdentityVerifiedBadge;
- (void)startAvailabilityLookup;
- (void)stopAvailabilityLookup;

@end
