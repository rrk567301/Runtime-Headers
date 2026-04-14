@protocol ABLinkingInfoDataSource;

@interface ABUpdatesLinkingInformation : NSObject {
    id<ABLinkingInfoDataSource> _adapter;
}

- (void)dealloc;
- (id)initWithAdapter:(id)a0;
- (void)updateLinkingInformation;
- (void)linkInsertedPeople;
- (void)updatePreferredNameFlags;
- (void)updatePreferredPhotoFlags;
- (void)unlinkLoneRemainingPeople;

@end
