@class NSString;

@interface _AMKeynote5Application : SBApplication

@property BOOL frozen;
@property (readonly) BOOL playing;
@property (readonly) BOOL slideSwitcherVisible;
@property (readonly) BOOL frontmost;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *version;

- (void)start;
- (void)pause;
- (id)open:(id)a0;
- (id)windows;
- (void)advance;
- (id)classNamesForCodes;
- (id)codesForPropertyNames;
- (void)resumeSlideshow;
- (void)pauseSlideshow;
- (void)quitSaving:(int)a0;
- (void)GetURL:(id)a0;
- (void)stopSlideshow;
- (void)print:(id)a0 printDialog:(BOOL)a1 withProperties:(id)a2;
- (id)slideshows;
- (void)showNext;
- (void)showPrevious;
- (void)startFrom;
- (void)acceptSlideSwitcher;
- (void)cancelSlideSwitcher;
- (void)moveSlideSwitcherBackward;
- (void)moveSlideSwitcherForward;
- (void)showSlideSwitcher;
- (id)appThemes;
- (id)appTransitions;

@end
