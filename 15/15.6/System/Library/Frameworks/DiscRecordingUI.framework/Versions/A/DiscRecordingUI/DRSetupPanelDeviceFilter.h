@class DRSetupPanel;

@interface DRSetupPanelDeviceFilter : DRDeviceFilter {
    DRSetupPanel *setupPanel;
}

- (id)bestDeviceFromAvailableDevices:(id)a0;
- (char)deviceCouldBeTarget:(id)a0;
- (id)initWithSetupPanel:(id)a0;

@end
