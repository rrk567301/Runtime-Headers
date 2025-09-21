@class NSUUID, NSString;

@interface CUMobileDevice : NSObject <NSCopying>

@property (nonatomic) struct _AMDevice { } *mdDevice;
@property (nonatomic) struct _AMDServiceConnection { } *mdNotificationService;
@property (nonatomic) struct _AMDevice { } *mdPlaceholderDevice;
@property (nonatomic) char mdStartedListener;
@property (nonatomic) char mdStartedService;
@property (nonatomic) char connected;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *internalModel;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char paired;
@property (nonatomic) char placeholder;
@property (copy, nonatomic) NSString *udid;
@property (copy, nonatomic) NSString *wifiAddress;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (char)removeAMDevice:(struct _AMDevice { } *)a0 changes:(unsigned int *)a1;
- (unsigned int)updateWithAMDevice:(struct _AMDevice { } *)a0 connect:(char)a1 paired:(int)a2;

@end
