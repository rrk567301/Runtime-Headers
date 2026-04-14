@class NSObject;
@protocol NSWindowSharingSessionHostButtonDelegate;

@interface NSWindowSharingSessionHostButton : NSButton

@property (weak) NSObject<NSWindowSharingSessionHostButtonDelegate> *delegate;
@property BOOL acceptsHover;

+ (void)initialize;

- (id)_buttonCell;
- (id)accessibilityTitle;
- (void)closeMenu;

@end
