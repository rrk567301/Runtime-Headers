@class GCKeyboard, GCMouse, GCRacingWheel, GCSpatialAccessory, GCStylus, GCController;
@protocol GCDevice;

@interface GCDeviceSessionEvent : NSObject {
    id<GCDevice> _device;
}

@property (readonly) unsigned long long type;
@property (readonly) id<GCDevice> device;
@property (readonly) GCKeyboard *keyboard;
@property (readonly) GCMouse *mouse;
@property (readonly) GCController *controller;
@property (readonly) GCRacingWheel *racingWheel;
@property (readonly) GCSpatialAccessory *spatialAccessory;
@property (readonly) GCStylus *stylus;

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 device:(id)a1;

@end
