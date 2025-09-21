@class ABRTTServices, ABCollectionItemMessagingAvailabilityHelper, CNFuture;

@interface ABPhoneCollectionViewItem : ABCollectionViewItem <ABCollectionItemMessagingAvailabilityHelperDelegate>

@property (retain, nonatomic) ABCollectionItemMessagingAvailabilityHelper *messagingHelper;
@property (retain, nonatomic) ABRTTServices *ttyServices;
@property (retain, nonatomic) CNFuture *availabilityFuture;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)didInsertIntoCollectionView:(id)a0;
- (void)didRemoveFromCollection:(id)a0;
- (void)messagingAvailabilityDidChangeHelper:(id)a0;
- (char)shouldShowGlyphButton:(id)a0;
- (char)shouldShowStaticIdentityVerifiedBadge;
- (void)startAvailabilityLookup;
- (void)stopAvailabilityLookup;

@end
