@interface DRDeviceChooser : NSControl {
    id filter;
    long long _reserved1;
    long long _reserved2;
    long long _reserved3;
    long long _reserved4;
}

+ (void)initialize;

- (void)sizeToFit;
- (id)filter;
- (BOOL)isFlipped;
- (void)setFilter:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)moveDown:(id)a0;
- (id)exposedBindings;
- (void)moveUp:(id)a0;
- (BOOL)_allowsContextMenus;
- (BOOL)isBordered;
- (void)performClick:(id)a0;
- (void)setBordered:(BOOL)a0;
- (id)selectedDevice;
- (void)setSelectedDevice:(id)a0;
- (void)selectDevice:(id)a0;

@end
