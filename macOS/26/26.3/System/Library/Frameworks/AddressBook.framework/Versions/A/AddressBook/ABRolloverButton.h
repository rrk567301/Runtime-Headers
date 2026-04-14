@class NSImage;

@interface ABRolloverButton : NSButton {
    NSImage *mRolloverImage;
    NSImage *mOriginalImage;
}

- (void)mouseExited:(id)a0;
- (void)mouseEntered:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)setRolloverImage:(id)a0;

@end
