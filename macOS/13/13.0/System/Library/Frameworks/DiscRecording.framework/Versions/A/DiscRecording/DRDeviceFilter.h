@interface DRDeviceFilter : NSObject <NSCopying, NSCoding> {
    id _delegate;
}

+ (id)defaultFilter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (BOOL)deviceIsSuitable:(id)a0;
- (id)bestDeviceFromAvailableDevices:(id)a0;

@end
