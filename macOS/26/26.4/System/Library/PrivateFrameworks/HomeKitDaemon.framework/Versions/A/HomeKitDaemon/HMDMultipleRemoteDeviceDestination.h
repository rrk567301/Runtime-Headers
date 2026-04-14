@class NSArray;

@interface HMDMultipleRemoteDeviceDestination : HMDRemoteMessageDestination

@property (copy) NSArray *devices;

- (id)remoteDestinationString;
- (id)allRemoteDestinationStrings;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTarget:(id)a0 devices:(id)a1;
- (id)remoteDestinationStringForDevice:(id)a0;

@end
