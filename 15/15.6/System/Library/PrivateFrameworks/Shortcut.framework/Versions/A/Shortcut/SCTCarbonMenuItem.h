@interface SCTCarbonMenuItem : NSObject {
    struct OpaqueMenuRef { } *mMenu;
    unsigned short mItemIndex;
}

- (id)description;
- (struct OpaqueMenuRef { } *)menu;
- (char)isVisible;
- (unsigned short)itemIndex;
- (void)setMenu:(struct OpaqueMenuRef { } *)a0;
- (char)validateItem;
- (id)initWithMenu:(struct OpaqueMenuRef { } *)a0 item:(unsigned short)a1;

@end
