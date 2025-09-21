@interface MRDeviceInfoOutputDevice : MRAVDistantOutputDevice

- (id)initWithDeviceInfo:(id)a0;
- (id)initWithDeviceInfo:(id)a0 fallbackOutputDevice:(id)a1 forExporting:(char)a2;
- (id)initWithDeviceInfo:(id)a0 forExporting:(char)a1;
- (char)shouldBeLocallyHosted;

@end
