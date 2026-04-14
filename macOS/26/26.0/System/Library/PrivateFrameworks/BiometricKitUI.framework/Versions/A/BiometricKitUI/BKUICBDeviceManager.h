@interface BKUICBDeviceManager : NSObject

- (id)getDetailsOfConnectedA2xxDevice;
- (id)getColorStringForA2xxDevice:(id)a0;
- (id)getConnectedA2xxDevice;
- (BOOL)hasAtleastOneRemovableDeviceConnectedTo:(id)a0;
- (BOOL)isA2xxDevice:(unsigned short)a0;

@end
