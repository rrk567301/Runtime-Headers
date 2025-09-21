@class NSSegmentedControl;

@interface MUISegmentedToolbarItem : NSToolbarItem

@property (retain) NSSegmentedControl *view;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void)validate;
- (void)sizeToFit;

@end
