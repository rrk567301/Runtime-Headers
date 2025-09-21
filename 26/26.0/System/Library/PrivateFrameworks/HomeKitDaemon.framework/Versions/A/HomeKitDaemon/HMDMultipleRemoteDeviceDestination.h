@class NSArray;

@interface HMDMultipleRemoteDeviceDestination : HMDRemoteMessageDestination

@property (copy) NSArray *devices;

- (id)remoteDestinationString;
- (id)init;
- (id)allRemoteDestinationStrings;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 devices:(id)a1;
- (id)remoteDestinationStringForDevice:(id)a0;

@end
