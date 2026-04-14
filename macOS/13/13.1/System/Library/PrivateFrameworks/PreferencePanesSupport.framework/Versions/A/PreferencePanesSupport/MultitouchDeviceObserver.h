@interface MultitouchDeviceObserver : NSObject

@property (readonly) long long attachedDevices;

+ (id)sharedObserver;

- (struct __CFDictionary { } *)_createHapticTrackpadMatchingDictionary;
- (long long)attachedDevices;

@end
