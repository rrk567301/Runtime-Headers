@class NSPrefCrossFadeView, NSPrefCrossFadeWindow;

@interface IASheetMorpher : NSObject {
    NSPrefCrossFadeView *_crossFadeImageView;
}

@property (retain) NSPrefCrossFadeWindow *hostSheet;

- (void).cxx_destruct;
- (id)initWithHostSheet:(id)a0;
- (void)setContentView:(id)a0 displayAndAnimate:(char)a1;

@end
