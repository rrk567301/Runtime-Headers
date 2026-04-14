@class NSImage;

@interface ABRolloverButton : NSButton {
    NSImage *mRolloverImage;
    NSImage *mOriginalImage;
}

- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)setRolloverImage:(id)a0;

@end
