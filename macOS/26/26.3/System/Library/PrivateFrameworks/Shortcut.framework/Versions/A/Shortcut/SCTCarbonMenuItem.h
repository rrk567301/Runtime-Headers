@interface SCTCarbonMenuItem : NSObject {
    struct OpaqueMenuRef { } *mMenu;
    unsigned short mItemIndex;
}

- (BOOL)isVisible;
- (id)description;
- (void)setMenu:(struct OpaqueMenuRef { } *)a0;
- (struct OpaqueMenuRef { } *)menu;
- (unsigned short)itemIndex;
- (BOOL)validateItem;
- (id)initWithMenu:(struct OpaqueMenuRef { } *)a0 item:(unsigned short)a1;

@end
