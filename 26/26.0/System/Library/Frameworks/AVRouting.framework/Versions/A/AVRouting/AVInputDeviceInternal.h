@class NSString;
@protocol AVInputDeviceImpl;

@interface AVInputDeviceInternal : NSObject {
    id<AVInputDeviceImpl> impl;
    NSString *name;
    NSString *ID;
    long long deviceType;
    long long deviceSubType;
    NSString *manufacturer;
    NSString *modelID;
}

@end
