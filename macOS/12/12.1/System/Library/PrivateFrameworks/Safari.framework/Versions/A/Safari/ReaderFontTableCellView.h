@class NSImageView, NSProgressIndicator, NSLayoutConstraint, NSButton;
@protocol ReaderFontTableCellViewDelegate;

@interface ReaderFontTableCellView : NSTableCellView {
    NSButton *_downloadButton;
    NSProgressIndicator *_progressIndicator;
}

@property (weak) NSImageView *checkboxImage;
@property (weak) NSLayoutConstraint *leadingContentConstraint;
@property (weak) NSLayoutConstraint *trailingContentConstraint;
@property (nonatomic) long long fontAvailabilityState;
@property (weak) id<ReaderFontTableCellViewDelegate> delegate;

- (void).cxx_destruct;
- (void)setProgressIndicatorProgress:(double)a0;
- (void)_installDownloadButton;
- (void)_installProgressIndicator;
- (void)_startDownloadIfAppropriate;

@end
