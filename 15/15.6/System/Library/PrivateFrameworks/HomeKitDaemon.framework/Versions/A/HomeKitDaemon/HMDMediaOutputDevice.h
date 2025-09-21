@class AVOutputDevice, NSString;

@interface HMDMediaOutputDevice : HMFObject

@property (readonly) AVOutputDevice *av_OutputDevice;
@property (nonatomic) void *outputDevice;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) unsigned int deviceSubtype;
@property (readonly, nonatomic) char supportsWHA;
@property (readonly, nonatomic) char supportsHAP;
@property (readonly) char isAppleMediaAccessory;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOutputDevice:(void *)a0;

@end
