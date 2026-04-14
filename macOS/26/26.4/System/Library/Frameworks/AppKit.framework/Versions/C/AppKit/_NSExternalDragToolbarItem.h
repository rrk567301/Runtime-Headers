@class NSArray;

@interface _NSExternalDragToolbarItem : NSToolbarItem {
    NSArray *_externalItems;
}

@property (copy, nonatomic) NSArray *externalItems;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithItemIdentifier:(id)a0;

@end
