@class NSSegmentedControl;

@interface MUISegmentedToolbarItem : NSToolbarItem

@property (retain) NSSegmentedControl *view;

- (void)sizeToFit;
- (void)validate;
- (id)initWithDictionaryRepresentation:(id)a0;

@end
