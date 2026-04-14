@class NSString;

@interface MRGetVolumeMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *outputDeviceUID;

- (unsigned long long)type;
- (id)init;
- (id)initWithOutputDeviceUID:(id)a0;

@end
