@class NSString, MRAVOutputDevice;
@protocol HMDAVOutputDevice;

@interface HMDMediaOutputDevice : HMFObject

@property (readonly) id<HMDAVOutputDevice> av_OutputDevice;
@property (readonly, nonatomic) MRAVOutputDevice *outputDevice;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) unsigned int deviceSubtype;
@property (readonly, nonatomic) BOOL supportsWHA;
@property (readonly, nonatomic) BOOL supportsHAP;
@property (readonly) BOOL isAppleMediaAccessory;

- (id)description;
- (id)initWithOutputDevice:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
