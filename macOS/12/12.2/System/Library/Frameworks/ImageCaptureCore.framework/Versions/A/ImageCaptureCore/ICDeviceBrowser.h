@class NSArray;
@protocol ICDeviceBrowserDelegate;

@interface ICDeviceBrowser : NSObject {
    id _privateData;
}

@property id<ICDeviceBrowserDelegate> delegate;
@property (readonly, getter=isBrowsing) BOOL browsing;
@property (readonly, getter=isSuspended) BOOL suspended;
@property unsigned long long browsedDeviceTypeMask;
@property (readonly) NSArray *devices;

- (void)dealloc;
- (id)init;
- (void)start;
- (void)stop;
- (id)preferredDevice;
- (void)addDevice:(id)a0;
- (void)removeDevice:(id)a0;
- (void)scanForTWAINDevices;
- (void)removeAllTWAINDevices;
- (void)addTWAINDevice:(id)a0;
- (BOOL)containsDevice:(id)a0;
- (id)deviceWithRef:(id)a0;
- (id)copyOfTWAINDevices;
- (void)resetAllTWAINDevices;

@end
