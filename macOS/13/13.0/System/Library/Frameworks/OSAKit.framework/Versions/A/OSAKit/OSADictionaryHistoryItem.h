@class NSArray, NSView, NSString;

@interface OSADictionaryHistoryItem : NSObject {
    NSArray *_selectedObjects;
    NSView *_selectedView;
    NSString *_selectedPath;
}

- (void)dealloc;
- (void)setSelectedObjects:(id)a0;
- (id)selectedObjects;
- (id)selectedView;
- (id)initWithSelectedObjects:(id)a0 inView:(id)a1;
- (void)setSelectedView:(id)a0;
- (id)selectedPath;
- (void)setSelectedPath:(id)a0;

@end
