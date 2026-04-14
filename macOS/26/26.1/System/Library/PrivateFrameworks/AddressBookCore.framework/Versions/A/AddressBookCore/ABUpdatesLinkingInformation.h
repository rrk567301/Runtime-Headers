@protocol ABLinkingInfoDataSource;

@interface ABUpdatesLinkingInformation : NSObject {
    id<ABLinkingInfoDataSource> _adapter;
}

- (id)initWithAdapter:(id)a0;
- (void)dealloc;
- (void)linkInsertedPeople;
- (void)unlinkLoneRemainingPeople;
- (void)updateLinkingInformation;
- (void)updatePreferredNameFlags;
- (void)updatePreferredPhotoFlags;

@end
