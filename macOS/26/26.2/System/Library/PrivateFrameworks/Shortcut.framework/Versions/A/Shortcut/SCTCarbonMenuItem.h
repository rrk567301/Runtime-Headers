@interface SCTCarbonMenuItem : NSObject {
    struct OpaqueMenuRef { } *mMenu;
    unsigned short mItemIndex;
}

- (void)setMenu:(struct OpaqueMenuRef { } *)a0;
- (BOOL)isVisible;
- (struct OpaqueMenuRef { } *)menu;
- (id)description;
- (unsigned short)itemIndex;
- (BOOL)validateItem;
- (id)initWithMenu:(struct OpaqueMenuRef { } *)a0 item:(unsigned short)a1;

@end
