@class NSImage;

@interface ABRolloverButton : NSButton {
    NSImage *mRolloverImage;
    NSImage *mOriginalImage;
}

- (void)reset;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)setRolloverImage:(id)a0;

@end
