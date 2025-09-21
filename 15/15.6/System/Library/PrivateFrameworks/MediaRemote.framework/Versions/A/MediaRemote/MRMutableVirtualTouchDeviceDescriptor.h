@interface MRMutableVirtualTouchDeviceDescriptor : MRVirtualTouchDeviceDescriptor

@property (nonatomic, getter=isAbsolute) char absolute;
@property (nonatomic, getter=isIntegratedDisplay) char integratedDisplay;
@property (nonatomic) union _MRHIDSize { struct { float x0; float x1; } x0; float x1[2]; } screenSize;

- (void)setScreenSize:(union _MRHIDSize { struct { float x0; float x1; } x0; float x1[2]; })a0;
- (void)setAbsolute:(char)a0;
- (void)setIntegratedDisplay:(char)a0;

@end
