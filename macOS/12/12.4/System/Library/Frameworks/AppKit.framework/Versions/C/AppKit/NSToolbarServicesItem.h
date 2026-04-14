@class NSString;

@interface NSToolbarServicesItem : NSToolbarItem {
    NSString *_representedObject;
}

@property (readonly) id representedObject;

- (void)dealloc;
- (id)initWithItemIdentifier:(id)a0;
- (void)validate;
- (id)_computeDefaultMenuFormRepresentation;

@end
