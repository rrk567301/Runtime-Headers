@class NSMutableArray;

@interface IKInterfaceBuilderSharedDelegate : NSObject {
    NSMutableArray *_clients;
    int _selectionCount;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)imageBrowserSelectionDidChange:(id)a0;
- (void)imageBrowser:(id)a0 cellWasDoubleClickedAtIndex:(unsigned long long)a1;
- (int)numberOfSelectedItems;
- (void)setImageView:(id)a0 asDelegateFor:(id)a1;
- (void)setNumberOfSelectedItems:(int)a0;

@end
