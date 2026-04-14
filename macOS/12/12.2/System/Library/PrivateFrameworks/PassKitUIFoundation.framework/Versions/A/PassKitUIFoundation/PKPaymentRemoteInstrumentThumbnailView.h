@class NSImageView;

@interface PKPaymentRemoteInstrumentThumbnailView : NSView

@property (retain, nonatomic) NSImageView *placeholderImageView;
@property (retain, nonatomic) NSImageView *cardImageView;

- (void).cxx_destruct;
- (id)initWithRemotePaymentInstrument:(id)a0;
- (void)_prepareConstraints;
- (void)_updateCardImage:(struct CGImage { } *)a0;

@end
