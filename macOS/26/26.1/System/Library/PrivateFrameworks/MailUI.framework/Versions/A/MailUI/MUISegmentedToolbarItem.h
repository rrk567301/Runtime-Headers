@class NSSegmentedControl;

@interface MUISegmentedToolbarItem : NSToolbarItem

@property (retain) NSSegmentedControl *view;

- (void)validate;
- (void)sizeToFit;
- (id)initWithDictionaryRepresentation:(id)a0;

@end
