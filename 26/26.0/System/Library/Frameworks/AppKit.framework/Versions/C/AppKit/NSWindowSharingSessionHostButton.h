@class NSObject;
@protocol NSWindowSharingSessionHostButtonDelegate;

@interface NSWindowSharingSessionHostButton : NSButton

@property (weak) NSObject<NSWindowSharingSessionHostButtonDelegate> *delegate;
@property BOOL acceptsHover;
@property BOOL recordingStyle;

+ (void)initialize;

- (id)accessibilityTitle;
- (id)_buttonCell;
- (void)closeMenu;

@end
