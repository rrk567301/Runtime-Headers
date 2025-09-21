@interface DRDeviceChooser : NSControl {
    id filter;
    long long _reserved1;
    long long _reserved2;
    long long _reserved3;
    long long _reserved4;
}

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)filter;
- (void)setFilter:(id)a0;
- (id)exposedBindings;
- (void)moveUp:(id)a0;
- (char)_allowsContextMenus;
- (char)isBordered;
- (char)isFlipped;
- (void)moveDown:(id)a0;
- (void)performClick:(id)a0;
- (void)setBordered:(char)a0;
- (void)sizeToFit;
- (id)selectedDevice;
- (void)setSelectedDevice:(id)a0;
- (void)selectDevice:(id)a0;

@end
