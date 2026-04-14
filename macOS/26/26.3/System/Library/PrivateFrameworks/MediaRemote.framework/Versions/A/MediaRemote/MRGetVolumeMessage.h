@class NSString;

@interface MRGetVolumeMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *outputDeviceUID;

- (unsigned long long)type;
- (id)initWithOutputDeviceUID:(id)a0;
- (id)init;

@end
