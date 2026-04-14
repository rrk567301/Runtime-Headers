@class NSObject;
@protocol NSWindowSharingSessionHostButtonDelegate;

@interface NSWindowSharingSessionHostButton : NSButton

@property (weak) NSObject<NSWindowSharingSessionHostButtonDelegate> *delegate;
@property BOOL acceptsHover;

+ (void)initialize;

- (void)closeMenu;
- (id)_buttonCell;
- (id)accessibilityTitle;

@end
