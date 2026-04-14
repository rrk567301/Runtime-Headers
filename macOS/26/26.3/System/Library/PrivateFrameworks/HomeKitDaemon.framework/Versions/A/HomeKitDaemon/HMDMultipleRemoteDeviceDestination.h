@class NSArray;

@interface HMDMultipleRemoteDeviceDestination : HMDRemoteMessageDestination

@property (copy) NSArray *devices;

- (id)allRemoteDestinationStrings;
- (id)remoteDestinationString;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 devices:(id)a1;
- (id)remoteDestinationStringForDevice:(id)a0;

@end
