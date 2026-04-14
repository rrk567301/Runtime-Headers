@class NSString;
@protocol _GCPhysicalDeviceManager;

@interface _GCNintendoJoyConProfile : NSObject <_GCDefaultDeviceManagerDelegate, _GCControllerProfile>

@property (class, readonly) id<_GCPhysicalDeviceManager> deviceManager;

@property (readonly, getter=isLeftJoyCon) BOOL leftJoyCon;
@property (readonly, getter=isRightJoyCon) BOOL rightJoyCon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
