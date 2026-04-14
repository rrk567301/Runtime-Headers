@class NSArray;

@interface HMDMultipleRemoteDeviceDestination : HMDRemoteMessageDestination

@property (copy) NSArray *devices;

- (id)remoteDestinationString;
- (void).cxx_destruct;
- (id)allRemoteDestinationStrings;
- (id)init;
- (id)initWithTarget:(id)a0 devices:(id)a1;
- (id)remoteDestinationStringForDevice:(id)a0;

@end
