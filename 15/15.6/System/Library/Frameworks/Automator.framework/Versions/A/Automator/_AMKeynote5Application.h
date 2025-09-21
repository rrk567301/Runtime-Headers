@class NSString;

@interface _AMKeynote5Application : SBApplication

@property char frozen;
@property (readonly) char playing;
@property (readonly) char slideSwitcherVisible;
@property (readonly) char frontmost;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *version;

- (void)pause;
- (void)start;
- (id)windows;
- (id)open:(id)a0;
- (void)advance;
- (id)classNamesForCodes;
- (id)codesForPropertyNames;
- (void)resumeSlideshow;
- (void)pauseSlideshow;
- (void)GetURL:(id)a0;
- (void)acceptSlideSwitcher;
- (id)appThemes;
- (id)appTransitions;
- (void)cancelSlideSwitcher;
- (void)moveSlideSwitcherBackward;
- (void)moveSlideSwitcherForward;
- (void)print:(id)a0 printDialog:(char)a1 withProperties:(id)a2;
- (void)quitSaving:(int)a0;
- (void)showNext;
- (void)showPrevious;
- (void)showSlideSwitcher;
- (id)slideshows;
- (void)startFrom;
- (void)stopSlideshow;

@end
