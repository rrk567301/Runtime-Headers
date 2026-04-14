@class MTRDeviceController, NSUUID;

@interface MTRDeviceControllerEntity : NSObject

@property (retain) MTRDeviceController *controller;
@property (retain) NSUUID *entityIdentifier;
@property long long runningMode;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithController:(id)a0 entityIdentifier:(id)a1 runningMode:(long long)a2;

@end
