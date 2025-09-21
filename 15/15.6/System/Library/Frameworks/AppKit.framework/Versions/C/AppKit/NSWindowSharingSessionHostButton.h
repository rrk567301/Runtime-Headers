@class NSObject;
@protocol NSWindowSharingSessionHostButtonDelegate;

@interface NSWindowSharingSessionHostButton : NSButton

@property (weak) NSObject<NSWindowSharingSessionHostButtonDelegate> *delegate;
@property char acceptsHover;
@property char recordingStyle;

+ (void)initialize;

- (id)_buttonCell;
- (id)accessibilityTitle;
- (void)closeMenu;

@end
