@interface SCTCarbonMenuItem : NSObject {
    struct OpaqueMenuRef { } *mMenu;
    unsigned short mItemIndex;
}

- (struct OpaqueMenuRef { } *)menu;
- (void)setMenu:(struct OpaqueMenuRef { } *)a0;
- (BOOL)isVisible;
- (id)description;
- (unsigned short)itemIndex;
- (BOOL)validateItem;
- (id)initWithMenu:(struct OpaqueMenuRef { } *)a0 item:(unsigned short)a1;

@end
