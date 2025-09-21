@class AVOutputDevice, MRAVOutputDevice, NSString;

@interface HMDMediaOutputDevice : HMFObject

@property (readonly) AVOutputDevice *av_OutputDevice;
@property (readonly, nonatomic) MRAVOutputDevice *outputDevice;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) unsigned int deviceSubtype;
@property (readonly, nonatomic) BOOL supportsWHA;
@property (readonly, nonatomic) BOOL supportsHAP;
@property (readonly) BOOL isAppleMediaAccessory;

- (id)initWithOutputDevice:(id)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
