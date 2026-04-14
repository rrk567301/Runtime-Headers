@protocol PanelPlusDelegate;

@interface PanelPlus : NSPanel

@property id<PanelPlusDelegate> delegate;

- (BOOL)makeFirstResponder:(id)a0;

@end
