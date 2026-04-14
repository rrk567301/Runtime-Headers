@class NSArray;

@interface _NSToolbarExternalDragItem : NSToolbarItem {
    struct CGSize { double width; double height; } _minMaxSize;
}

@property (copy, nonatomic) NSArray *externalItems;

- (void)dealloc;
- (struct CGSize { double x0; double x1; })minSize;
- (struct CGSize { double x0; double x1; })maxSize;

@end
