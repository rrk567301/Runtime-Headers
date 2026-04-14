@class TVRCHMServiceWrapper, TVRXDevice, TVRCRPCompanionLinkClientWrapper;

@interface _TVRDeviceAggregate : NSObject

@property (retain, nonatomic) TVRCRPCompanionLinkClientWrapper *rapport;
@property (retain, nonatomic) TVRCHMServiceWrapper *homeKit;
@property (retain, nonatomic) TVRXDevice *publicDevice;

- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)bestImpl;

@end
