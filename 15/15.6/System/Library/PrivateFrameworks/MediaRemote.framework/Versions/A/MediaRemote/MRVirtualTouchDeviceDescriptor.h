@interface MRVirtualTouchDeviceDescriptor : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic, getter=isAbsolute) char absolute;
@property (readonly, nonatomic, getter=isIntegratedDisplay) char integratedDisplay;
@property (readonly, nonatomic) union _MRHIDSize { struct { float width; float height; } ; float data[2]; } screenSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
