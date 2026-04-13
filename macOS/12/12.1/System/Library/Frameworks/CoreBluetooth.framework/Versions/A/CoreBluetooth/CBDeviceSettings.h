@class NSString;

@interface CBDeviceSettings : NSObject <CUXPCCodable>

@property (nonatomic) char aclPriority;
@property (nonatomic) char allowsAutoRoute;
@property (nonatomic) char audioRouteHidden;
@property (nonatomic) unsigned long long deviceFlagsMask;
@property (nonatomic) unsigned long long deviceFlagsValue;
@property (nonatomic) char doubleTapActionLeft;
@property (nonatomic) char doubleTapActionRight;
@property (nonatomic) char microphoneMode;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char placementMode;
@property (nonatomic) char relinquishAudioRoute;
@property (nonatomic) char smartRoutingMode;

- (id)description;
- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;

@end
