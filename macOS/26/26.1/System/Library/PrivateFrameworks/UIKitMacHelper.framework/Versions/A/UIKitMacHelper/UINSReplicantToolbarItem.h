@class NSToolbarItem;

@interface UINSReplicantToolbarItem : NSToolbarItem {
    NSToolbarItem *_originalItem;
}

@property (readonly, weak) NSToolbarItem *originalItem;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithItemIdentifier:(id)a0 originalItem:(id)a1;
- (void)setOriginalItem:(id)a0;

@end
