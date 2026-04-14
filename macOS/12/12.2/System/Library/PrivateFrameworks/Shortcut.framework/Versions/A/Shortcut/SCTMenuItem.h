@interface SCTMenuItem : NSObject {
    struct OpaqueMenuRef { } *mMenu;
    unsigned short mItemIndex;
}

- (id)description;
- (struct OpaqueMenuRef { } *)menu;
- (BOOL)isVisible;
- (void)setMenu:(struct OpaqueMenuRef { } *)a0;
- (unsigned short)itemIndex;
- (BOOL)validateItem;
- (id)initWithMenu:(struct OpaqueMenuRef { } *)a0 item:(unsigned short)a1;

@end
